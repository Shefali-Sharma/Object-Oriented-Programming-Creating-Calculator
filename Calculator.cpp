#include <iostream>
using namespace std;

class Calculator
{
  public:
    int Calculate(int, int, char);
};

class OperatorClass
{
    char type;
};

int Calculator::Calculate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return (a + b);
    case '-':
        return (a - b);
    case '*':
        return (a * b);
    case '/':
        if (b != 0)
            return (a / b);
    default:
        cin >> a >> op >> b;
        return Calculate(a, b, op);
    }
}

int main()
{

    int x, y, result;
    char oper;
    cout << "Please enter num1 operator num2: " << endl;
    cin >> x >> oper >> y;

    Calculator c;
    result = c.Calculate(x, y, oper);
    cout << "Result is: " << result << endl;

    cin.ignore();
    cin.get();
    return 0;
}