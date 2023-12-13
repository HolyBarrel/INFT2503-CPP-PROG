#include <vector>
#include <iostream>
#include <thread>
#include <string> 
#include <functional>
#include <mutex>
using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table);

vector<int> parallell_transform(const vector<int> &a, const vector<int> &b, function<int(int, int)> function_input);

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

void worker(const vector<int> &a, const vector<int> &b, vector<int> &result, function<int(int, int)> func, int startIdx, int endIdx, mutex &mut) {
    for (int i = startIdx; i < endIdx; ++i) {
        int computedValue = func(a[i], b[i]);
        lock_guard<mutex> lock(mut);
        result[i] = computedValue;
    }
}

vector<int> parallell_transform(const vector<int> &a, const vector<int> &b, function<int(int, int)> function_input) {
    int n = thread::hardware_concurrency();
    vector<int> result(a.size());
    vector<thread> threads(n);
    mutex mut;

    int gap = a.size() / n;
    int remainder = a.size() % n;
    int startIdx = 0;

    for (int i = 0; i < n; ++i) {
        int endIdx = startIdx + gap; 
        if(i == n - 1) endIdx += remainder;

        threads[i] = thread(worker, ref(a), ref(b), ref(result), function_input, startIdx, endIdx, ref(mut));
        startIdx = endIdx;
    }

    for (auto &t : threads) {
        t.join();
    }

    return result;
}