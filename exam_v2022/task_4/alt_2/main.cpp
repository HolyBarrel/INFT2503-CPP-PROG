#include <vector>
#include <iostream>
#include <thread>
#include <string> 
#include <functional>
#include <mutex>
using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table);

vector<int> parallell_transform(const vector<int> &a, const vector<int> &b, const std::function<int(int, int)> &callback);

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 5, 6};
    cout << parallell_transform(a, b, [](int a_element, int b_element) {
    return a_element + b_element;
    }) << endl;
    cout << parallell_transform(a, b, [](int a_element, int b_element) {
    return a_element * b_element;
    }) << endl;
    return 0;
}

ostream &operator<<(ostream &out, const vector<int> &table) {
  for (auto &e : table)
    out << e << " ";
  return out;
}

vector<int> parallell_transform(const vector<int> &a, const vector<int> &b, const std::function<int(int, int)> &callback) {
  vector<int> result(a.size());
  std::vector<thread> threads;
  auto thread_size = thread::hardware_concurrency();
  threads.reserve(thread_size);
  for (size_t thread_num = 0; thread_num < thread_size; ++thread_num) {
    threads.emplace_back([thread_num, thread_size, &result, &a, &b, &callback] {
      for (size_t i = thread_num; i < a.size(); i += thread_size)
        result[i] = callback(a[i], b[i]);
    });
  }
  for (auto &thread : threads)
    thread.join();
  return result;
}