#include <iostream>
#include <memory>
#include <thread>
using namespace std; 

int main() 
{   
    // Task 2
    std::unique_ptr<thread> a_thread;
    {
    static int a = 2;
    auto b = make_unique<int>(2);
    a_thread = make_unique<thread>([b = move(b)] {
        std::cout << (a + *b) << std::endl;
    });
    }
    a_thread->join();

    return 0;
}
