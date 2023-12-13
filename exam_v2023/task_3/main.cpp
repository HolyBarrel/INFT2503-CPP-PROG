#include <iostream>
#include <string>
using namespace std; 

string clean_text(const string& text);

int main() 
{   
    string input_a = "Hello (world)";
    string input_b = "INF(INI)T(E)25()03()";
    cout << clean_text(input_a) << endl;
    cout << clean_text(input_b) << endl;

    return 0;
}

string clean_text(const string& text)
{
    string result;

    result.reserve(text.length());

    bool isInParentheses = false;

    for (char ch : text) 
    {
        if (ch == '(') 
        {
            isInParentheses = true;
        }
        else if (ch == ')') 
        {
            isInParentheses = false;
        }
        else if (!isInParentheses) 
        {
            result += ch;
        }
    }

    return result;
}