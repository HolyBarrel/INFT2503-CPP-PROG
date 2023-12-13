#include <thread>
#include <functional>
#include <iostream>
#include <vector>
#include <string>
using namespace std; 

vector<bool> parallell_prime(const vector<int>& vect);

ostream &operator<<(ostream &out, const vector<bool> vect) {
    out << boolalpha << "{ ";

    for (size_t i = 0; i < vect.size(); ++i)
    {
        if (i != vect.size() - 1)
        {
            out << vect[i] << ", ";
        }
        else {
            out << vect[i];
        }
    }

    out << " }";

  return out;
}

bool is_prime(int n)
{
    if(n <= 1)
    {
        return false;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void checkPrime(const vector<int>& numbers, vector<bool>& results, size_t start, size_t end)
{
    for(size_t i = start; i < end; i++)
    {
        results[i] = is_prime(numbers[i]);
    }
}

int main() 
{   
    vector<int> a = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << parallell_prime(a) << endl;

    return 0;
}

vector<bool> parallell_prime(const vector<int>& vect)
{
    vector<bool> result(vect.size());
    vector<thread> threads;
    auto thread_size = thread::hardware_concurrency();
    threads.reserve(thread_size);

    size_t block_size = vect.size() / thread_size;
    size_t remainder = vect.size() % thread_size;
    size_t start = 0;
    size_t end = block_size;

    for (size_t thread_num = 0; thread_num < thread_size; ++thread_num) {
        if(thread_num == thread_size - 1) end += remainder;
        threads[thread_num] = thread(checkPrime, ref(vect), ref(result), start, end);
        start = end;
        end += block_size;
    }

    for (auto &thread : threads)
        thread.join();

    return result;     
}
