#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    char ch;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operater: ";
    cin >> ch;

    switch (ch)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    case '%':
        result = num1 % num2;
        break;

    default:
        cout << "Invalid operater";
        break;
    }

    cout << result;
}