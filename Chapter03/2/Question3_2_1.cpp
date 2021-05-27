#include <iostream>
using namespace std;

class Calculator
{
private:
    int count[4];
public:
    void Init();
    double Add(double a, double b);
    double Min(double a, double b);
    double Mul(double a, double b);
    double Div(double a, double b);
    void ShowOpCount();
};

void Calculator::Init()
{
    for (int i=0; i<4; i++)
        count[i] = 0;
}

double Calculator::Add(double a, double b)
{
    count[0] += 1;
    return a + b;
}

double Calculator::Min(double a, double b)
{
    count[1] += 1;
    return a - b;
}

double Calculator::Mul(double a, double b)
{
    count[2] += 1;
    return a * b;
}

double Calculator::Div(double a, double b)
{
    count[3] += 1;
    return a / b;
}

void Calculator::ShowOpCount()
{
    cout << "덧셈: " << count[0] << " 뺄셈: " << count[1] << " 곱셈: " << count[2] << " 나눗셈: " << count[3] << endl;
}

int main(void)
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2,2.4) << endl; 
    cout << "3.5 + 1.7 = " << cal.Div(3.5,1.7) << endl; 
    cout << "2.2 + 1.5 = " << cal.Min(2.2,1.5) << endl; 
    cout << "4.9 + 1.2 = " << cal.Div(4.9,1.2) << endl;
    cal.ShowOpCount();
    return 0;
}