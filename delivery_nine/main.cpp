#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
  for (auto &e : table)
    out << e << " ";
  return out;
}

int main() {

  cout << "Task A" << endl;
  
  vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
  cout << "v1: " << v1 << endl;

  const int NUM = 15;

  vector<int>::iterator searcher = find_if(v1.begin(), v1.end(), [NUM](int n) { return n > NUM; });

  cout << "The first number greater than " << NUM << " is " << *searcher << endl << endl;

  cout << "Task B" << endl;

  vector<int> v2 = {2, 3, 12, 14, 24};
  cout << "v2: " << v2 << endl;

  vector<int>::iterator it_v1_begin = v1.begin();
  vector<int>::iterator it_v1_stop = v1.begin() + 5;

  vector<int>::iterator it_v2_begin = v2.begin();
  vector<int>::iterator it_v2_end = v2.end();

  bool fuzzy_equality = equal(it_v1_begin, it_v1_stop, it_v2_begin, it_v2_end, [](int n1, int n2) { return abs(n1 - n2) < 3; });

  //Result is false because the last elements are not fuzzy equal
  cout << "v1[0...5> and v2 are " << (fuzzy_equality ? "" : "not ") << "fuzzy equal" << endl << endl;

  it_v1_stop = v1.begin() + 4;

  fuzzy_equality = equal(it_v1_begin, it_v1_stop, it_v2_begin, it_v2_end, [](int n1, int n2) { return abs(n1 - n2) < 3; });

  //Result is false because the iterators are not the same size
  cout << "v1[0...4> and v2 are " << (fuzzy_equality ? "" : "not ") << "fuzzy equal" << endl << endl;

  vector<int>::iterator it_v2_stop = v2.begin() + 4;

  fuzzy_equality = equal(it_v1_begin, it_v1_stop, it_v2_begin, it_v2_stop, [](int n1, int n2) { return abs(n1 - n2) < 3; });

  //Added this step to have a positive result as well
  cout << "v1[0...4> and v2[0...4> are " << (fuzzy_equality ? "" : "not ") << "fuzzy equal" << endl << endl;

  cout << "Task C" << endl;

  vector<int>::iterator it_v1_end = v1.end();

  vector<int> v3 (it_v1_end - it_v1_begin);

  replace_copy_if(it_v1_begin, it_v1_end, v3.begin(), [](int n) { return n % 2 == 1; }, 100);

  cout << "v3: " << v3 << endl << endl;

  return 0;
}
