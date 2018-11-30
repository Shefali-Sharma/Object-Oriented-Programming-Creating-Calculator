#include <iostream>
using namespace std;

class Calculator{
    public:
        int Calculate(int, int, char);
};



int Calculator::Calculate(int a, int b, char op){
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

int main(){
    
    cout <<"Hello World" << endl;

    cin.ignore();
    cin.get();
    return 0;
}