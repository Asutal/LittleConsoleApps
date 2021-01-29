/*********************
 * coding: UTF-8     *
 * Auther: Asutal    *
 *********************/
#include <iostream>
using namespace std;

double jisuan(double a, char oper, double b)
{
    switch (oper)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return ( b ? a / b : 0);
        //三目运算符 b为0返回0
        break;
    default:
        cerr << "Error\n";
        break;
    }
}

int main()
{
    double num1 = 0;
    double num2 = 0;
    char oper = 0;
    char choo = 0;
    do
    {
        cout << "请输入数据" << endl;
        cout << "例：a(+,-,*,/)b" <<endl;
        cin >> num1 >> oper >> num2;
        cout << jisuan(num1, oper, num2) << endl;
        cout << "Continue?(y/n)";
        cin >> choo;
    } while (choo == 'Y'||'y');
    return 0;
}
