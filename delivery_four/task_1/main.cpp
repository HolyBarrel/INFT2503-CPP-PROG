#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector<double> &vector);

int main()
{

  vector<double> nums;

  for(size_t i = 0; i < 5; ++i)
  {
    double current = (double) i;
    nums.emplace_back(current);
  }

  print_vector(nums);

  cout << "Element at the front of the vector: " << 
  endl << nums.front() << endl;

  cout << "Element at the back of the vector: " << 
  endl << nums.back() << endl;

  const double NUMBER = 100;
  nums.emplace(nums.begin(), NUMBER);

  cout << endl << "After using emplace():"<< endl;
  print_vector(nums);

  cout << endl << "Front() after using emplace():" << endl;
  cout << nums.front() << endl;

  cout << endl <<"Find() search: " << endl;

  auto search = find(nums.begin(), nums.end(), NUMBER);
  if(search != nums.end()) 
  {
    cout << "The search found a value in the vector!" << endl 
    << "The value was: " << nums.at(search - nums.begin()) << endl;
  }
  else 
  {
    cout << "The search did not find a value in the vector!" << endl;
  }







  return 0;
}

void print_vector(vector<double> &vector) 
{
    cout << endl << "Print of the vector:" << endl;

  for(auto dbl : vector)
  {
    cout << dbl << endl;
  }
  
}
