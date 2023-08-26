#include <iostream>
using namespace std;

int find_sum(const int *table, int length);

int main()
{
  const int LENGTH = 20;
  
  //Init table
  int table[LENGTH] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  
  int interval_size = 10;
  
  
  //Pointer to the element at the zeroth index in the table
  int *table_pointer = table;
  cout << "The sum of the numbers 1 through 10: \t" << find_sum(table_pointer, interval_size) << endl;
  
  
  //Adjustments to point to the second interval [11,15]
  table_pointer += interval_size;
  
  interval_size = 5;
  
  cout << "The sum of the numbers 11 through 15: \t" << find_sum(table_pointer, interval_size) << endl;
  
  
  //Adjustments to point to the last interval [16, 20]
  table_pointer += interval_size;
  
  cout << "The sum of the numbers 16 through 20: \t" << find_sum(table_pointer, interval_size) << endl;
  
  
  return 0; 
}

//Returns the sum for the length amount of elements in the pointed to table
int find_sum(const int *table, int length)
{
  int sum = 0;
  for(int i = 0; i < length; i++) {
    sum += table[i];
  }
  return sum;
}
