#include <bits/stdc++.h>
#include <conio.h>
#include "Vector.h"
using namespace std;

void test1(), test2();

int main()
{
    int k;
    char c;
    cout << "\n欢迎来到向量的世界!  Welcome to the World of Vector\n" << endl;
    while (true)
    {
        cout << "请选择一种你喜欢的测试方式  Choose one way you like to test" << endl;
        cout << "[1]看看结果  See the results we have prepared" << endl;
        cout << "[2]动动手指  Do the test by yourself" << endl;
        cout << "[0]退出测试  Quit" << endl;
        k = getch()-'0';
        if (k<=0) break;
        if (k==1) test1();
        if (k==2) test2();
        if (k>=3) cout << "输入的数字无效" << endl;
        cout << "是否继续测试？[Y/N]" << endl;
        c = getch();
        while (c!='Y'&&c!='y')
        {
            if (c=='N'||c=='n') break;
            else
            {
                cout << "是否继续测试？[Y/N]" << endl;
                c = getch();
            }
        }
        if (c=='N'||c=='n') break;
        cout << endl;
    }
    return 0;
}
