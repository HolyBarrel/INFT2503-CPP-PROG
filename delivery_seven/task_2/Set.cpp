#include "Set.hpp"
#include <algorithm>
using namespace std;

Set::Set()
{
  set_vector = vector<int>();
}

Set::Set(vector<int> set_vector)
{
  this->set_vector = move(set_vector);
}

Set Set::operator+(const Set &other) const 
{
  Set new_set(this->set_vector);

  auto itr_start = new_set.set_vector.begin();
  auto itr_end = new_set.set_vector.end();

  for(int i = 0; i < other.set_vector.size(); i++)
  {
      if(find(itr_start, itr_end, other.set_vector[i]) == itr_end)
          new_set.set_vector.push_back(other.set_vector[i]);
  }

  return new_set;
}

Set Set::operator+(int other) const 
{
  Set new_set(this->set_vector);

  if(find(new_set.set_vector.begin(), new_set.set_vector.end(), other) == new_set.set_vector.end())
      new_set.set_vector.push_back(other);
  
  return new_set;
}

Set operator+(int integer, const Set &other)
{
  return (other + integer);
}

Set &Set::operator=(const Set &other)
{
  this->set_vector = other.set_vector;
  return *this;
}

ostream &operator<<(ostream &os, const Set &other)
{
  for (auto element : other.set_vector)
  {
    os << element << " ";
  }
  return os;
}