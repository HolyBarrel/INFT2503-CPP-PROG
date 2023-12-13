#include <iostream>
#include <functional>
#include <string>

using namespace std;


template<typename T1, typename T2, typename T3>
int pipe(function<T2(T3)> f1, function<int(T2)> f2, T3 value) {
    T2 result = f1(value);
    return f2(result);
}

int main() {
    cout << pipe<int, int, int>([](int x) { return x * 10; }, [](int x) { return x - 1; }, 4) << endl;
    cout << pipe<int, string, string>([](string x) { return x + x; }, [](string x) { return x.length(); }, "hello") << endl;
    return 0;
}
