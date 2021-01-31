#include <iostream>
#include <math.h>

using namespace std;
double ggdl(double a, double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main()
{
    double a = 0;
    double b = 0;
    char result = 0;
    do
    {
        cout << "欢迎来到勾股定理计算器\n";
        cout << "请输入两个直角边的值\n";
        cin >> a >> b;
        if (!(a or b)) // or为c++11新增的关键字 (写的时候忘了||)
        {
            cout << "错误！\n两边必须均大于0！\n";
            continue;
        }
        cout << ggdl(a, b) << endl;
        cout << "是否继续(Y/N)\n";
        cin >> result;
    } while (result == 'Y');

    return 0;
}
