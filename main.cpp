#include <bits/stdc++.h>
#include <conio.h>
#include "Vector.h"
using namespace std;

void test1(), test2();

int main()
{
    int k;
    char c;
    cout << "\n��ӭ��������������!  Welcome to the World of Vector\n" << endl;
    while (true)
    {
        cout << "��ѡ��һ����ϲ���Ĳ��Է�ʽ  Choose one way you like to test" << endl;
        cout << "[1]�������  See the results we have prepared" << endl;
        cout << "[2]������ָ  Do the test by yourself" << endl;
        cout << "[0]�˳�����  Quit" << endl;
        k = getch()-'0';
        if (k<=0) break;
        if (k==1) test1();
        if (k==2) test2();
        if (k>=3) cout << "�����������Ч" << endl;
        cout << "�Ƿ�������ԣ�[Y/N]" << endl;
        c = getch();
        while (c!='Y'&&c!='y')
        {
            if (c=='N'||c=='n') break;
            else
            {
                cout << "�Ƿ�������ԣ�[Y/N]" << endl;
                c = getch();
            }
        }
        if (c=='N'||c=='n') break;
        cout << endl;
    }
    return 0;
}
