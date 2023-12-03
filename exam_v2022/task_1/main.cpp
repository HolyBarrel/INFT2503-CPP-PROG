#include <iostream>
#include <string>
#include <vector>
using namespace std; 

int times_two(int num);
double times_two(double num);
string times_two(string str);
ostream& operator<<(ostream& os, vector<int> vect);
vector<int> times_two(vector<int> vect);

int main() {

    cout << times_two(2) << endl;
    cout << times_two(2.25) << endl;
    cout << times_two("test") << endl;
    cout << times_two(vector<int> {1, 2, 3}) << endl;

    return 0;
}

int times_two(int num)
{
    return num * 2;
}

double times_two(double num)
{
    return num * 2;
}

string times_two(string str)
{
    return str + str;
}

ostream& operator<<(ostream& os, vector<int> vect)
{
    os << "{ ";
    size_t counter = 0;
    for(auto element : vect)
    {   
        if(counter != vect.size()-1)
        {
            os << element << ", ";
        }
        else {
            os << element;
        }

        counter++;
    }
    os << " } ";

    return os;
}

vector<int> times_two(vector<int> vect)
{
    vector<int> result;

    for(auto element : vect)
    {
        result.emplace_back(times_two(element));
    }

    return result;
}

