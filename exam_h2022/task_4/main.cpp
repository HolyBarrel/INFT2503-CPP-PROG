#include <iostream>
#include <vector>
#include <string>
#include "models/Matrix.h"
using namespace std; 


int main() 
{   
    Matrix<int> m_a({{1, 2}, {3, 4}, {5, 6}});
    Matrix<int> m_b({{1, 2, 3}, {4, 5, 6}});
    cout << m_a << endl;
    cout << m_b << endl;
    cout << m_a * m_b << endl;
    cout << m_b * m_a << endl;
    Matrix<int> m_c({{1, 2}});
    Matrix<int> m_d({{2}, {2}});
    cout << m_c * m_d << endl;
    cout << m_d * m_c << endl;


    return 0;
}