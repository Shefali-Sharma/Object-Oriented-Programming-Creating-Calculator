#include <iostream>
#include <stack>
#include <string>
using namespace std;

enum class Advanced
{
    sin,
    cos,
    tan,
    log
};
class Calculator
{
    string replaceAll(string);

  public:
    int Evaluate(string);
};

int Calculator::Evaluate(string oper)
{
    oper = replaceAll(oper);
    cout << oper << endl;
    stack<string> braces_op;
    stack<int> nums;

    for (int i = 0; i < oper.length(); i++)
    {
        if ((oper[i] - '0') > 48)
        {
            braces_op.push(to_string(oper[i]));
        }
    }

    // switch (op)
    // {
    // case '+':
    //     return (a + b);
    // case '-':
    //     return (a - b);
    // case '*':
    //     return (a * b);
    // case '/':
    //     if (b != 0)
    //         return (a / b);
    // default:
    //     cin >> a >> op >> b;
    //     return Evaluate(a, b, op);
    // }
    return 0;
}

string Calculator::replaceAll(string oper)
{
    size_t index = 0;
    while (true)
    {
        index = oper.find("sin", index);
        if (index == std::string::npos)
            break;
        oper.replace(index, 3, "s");
        index += 1;
    }
    index = 0;
    while (true)
    {
        index = oper.find("cos", index);
        if (index == std::string::npos)
            break;
        oper.replace(index, 3, "c");
        index += 1;
    }
    index = 0;
    while (true)
    {
        index = oper.find("tan", index);
        if (index == std::string::npos)
            break;
        oper.replace(index, 3, "t");
        index += 1;
    }
    index = 0;
    while (true)
    {
        index = oper.find("log", index);
        if (index == std::string::npos)
            break;
        oper.replace(index, 3, "l");
        index += 1;
    }
    return oper;
}

int main()
{
    int result;
    string oper;
    cout << "Please enter operation: " << endl;
    cin >> oper;

    Calculator c;
    result = c.Evaluate(oper);
    cout << "Result is: " << result << endl;

    cin.ignore();
    cin.get();
    return 0;
}