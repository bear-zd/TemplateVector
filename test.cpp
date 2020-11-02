#include <bits/stdc++.h>
#include <conio.h>
#include <time.h>
#include "Vector.h"
using namespace std;

void show1(), show2(), show3(), show4();
void operate1(), operate2(), operate3(), operate4(), operate5();
void operate6(), operate7(), operate8(), operate9(), operate10();
void operate11(), operate12(), operate13(), operate14(), operate15();
void choose1(int), choose2(int), choose3(int);
int chooseIfModify(), chooseModifyNum(int);

void test1()
{
    int n;
    while (true)
    {
        cout << "\n请选择一类函数进行查看" << endl;
        cout << "(1)四大构造函数" << endl;
        cout << "(2)属性函数" << endl;
        cout << "(3)操作函数" << endl;
        cout << "(4)运算函数" << endl;
        cout << "(0)退出查看" << endl << endl;
        n = getch()-'0';
        if (n==0) break;
        if (n==1) show1();
        if (n==2) show2();
        if (n==3) show3();
        if (n==4) show4();
    }

}

void show1()
{
    int Rand1, Rand2, Rand3;
    srand((unsigned)time(NULL));
    Rand1 = (rand()%10)+1;
    Rand2 = (rand()%10)/2+2;
    Rand3 = rand()%100;
    Vector<int> V1, V2(Rand1), V3(Rand2,Rand3);
    Vector<double> v1(Rand2,3.1416), v2(v1), v3=v2;
    cout << "--------------------------------------------测试四大构造函数--------------------------------------------" << endl << endl;
    cout << "构造一个维度为 0 的(int)向量 V1 ：";
    V1.ShowVector();
    cout << endl;
    cout << "构造一个维度为 " << Rand1 << " 的(int)向量 V2 ：";
    V2.ShowVector();
    cout << endl;
    cout << "构造一个维度为 " << Rand2 << " 初始值均为 " << Rand3 << " 的(int)向量 V3 ：";
    V3.ShowVector();
    cout << endl;
    cout << "构造一个维度为 " << Rand2 << " 初始值均为 3.1416 的(double)向量 v1 ：";
    v1.ShowVector();
    cout << endl;
    cout << "用向量 v1 拷贝构造向量 v2 ：";
    v2.ShowVector();
    cout << endl;
    cout << "用向量 v2 赋值构造向量 v3 ：";
    v3.ShowVector();
    cout << endl << endl;
    cout << "--------------------------------------------测试四大构造函数--------------------------------------------" << endl;
    cout << endl;
}

void show2()
{
    int Rand1, Rand2;
    double temp;
    Rand1 = (rand()%15)/2+2;
    Rand2 = rand()%40;
    Vector<double> v1,v2(Rand1,Rand2*1.4);
    cout << "----------------------------------------------测试属性函数----------------------------------------------" << endl << endl;
    cout << "构造一个维度为 0 的(double)向量 v1 ：" << endl << endl;
    cout << "这个向量是空向量（即维度为0）吗？" << endl;
    if (v1.Empty())
        {
            cout << "是，这个向量的维度为：0  ";
            v1.ShowD();
            cout << endl;
            cout << "这个向量的模长为："; temp=v1.Mod();
            cout << "输出结果：" << temp << endl << endl;
            cout << "利用重载输出运算符，输出 v1 ：";
            cout << v1 << endl << endl;
            cout << "这个向量单位化后为：" << endl;
            v1.Normalize();
            cout << "向量 v1 ：";
            v1.ShowVector();
        }
    cout << endl << endl << endl;
    cout << "构造一个维度为 " << Rand1 << " 初始值均为 " << Rand2*1.4 << " 的(double)向量 v2 ：";
    v2.ShowVector();
    cout << endl;
    cout << "这个向量是空向量（即维度为0）吗？" << endl;
    if (v2.Empty()) { cout << "是，这个向量的维度为：0  "; v2.ShowD(); }
    else
    {
        cout << "不，这个向量的维度为：" << v2.GetD() << "  ";
        v2.ShowD();
        cout << endl;
        cout << "向量 v2 的第 1 维度数值为：" << v2[0] <<endl;
        cout << "向量 v2 的第 100 维度数值为："; temp=v2[99];
        cout << "输出结果：" << temp << " 为异常值" << endl << endl;
        cout << "这个向量的模长为：" << v2.Mod() << endl;
        v2.Normalize();
        cout << endl;
        cout << "这个向量单位化后为：";
        v2.ShowVector();
    }
    cout << endl << endl;
    cout << "----------------------------------------------测试属性函数----------------------------------------------" << endl;
    cout << endl;
}

void show3()
{
    int Rand1,i;
    Rand1 = (rand()%6)+2;
    Vector<double> v1(Rand1,2.7183);
    cout << "----------------------------------------------测试操作函数----------------------------------------------" << endl << endl;
    cout << "构造一个维度为 " << Rand1 << " 初始值均为 2.7183 的(double)向量 v1 ：";
    v1.ShowVector();
    cout << endl;
    cout << "将向量 v1 的维度更改为：" << Rand1*2-15 << endl;
    v1.Resize(Rand1*2-15);
    cout << "向量 v1 ：";
    v1.ShowVector();
    cout << endl;
    cout << "在向量 v1 的末尾删除一个数字\t";
    v1.Pop();
    cout << "向量 v1 ：";
    v1.ShowVector();
    cout << endl;
    cout << "将向量 v1 的维度更改为：" << Rand1/2+2 << "\n";
    v1.Resize(Rand1/2+2);
    v1.Resize(0);
    cout << "将向量 v1 的值更改为：";
    for (i=1; i<=Rand1/2+2; i++)
    { v1.Append(2.7183*i); }
    v1.ShowVector();
    cout << endl;
    cout << "在向量 v1 的末尾添加一个数字（" << Rand1/2+2 << "." << Rand1/2+2 << "）" << endl;
    v1.Append((Rand1/2+2)*1.1);
    cout << "向量 v1 ：";
    v1.ShowVector();
    cout << endl;
    cout << "在向量 v1 中查找数字（" << (Rand1/2+2)*1.1 << "）：" << endl;
    if (v1.Find((Rand1/2+2)*1.1)==-1) { cout << "数字 " << (Rand1/2+2)*1.1 << " 没有出现在向量 v1 中" << endl; }
    else { cout << "向量 v1 的第 " << v1.Find((Rand1/2+2)*1.1)+1 << " 维度数值为：" << (Rand1/2+2)*1.1 << endl << endl; }
    cout << "在向量 v1 的末尾删除一个数字" << endl;
    v1.Pop();
    cout << "向量 v1 ：";
    v1.ShowVector();
    cout << endl;
    cout << "在向量 v1 中查找数字（" << Rand1*1.7 << "）：" << endl;
    if (v1.Find(Rand1*1.7)==-1) { cout << "数字 " << Rand1*1.7 << " 没有出现在向量 v1 中" << endl; }
    else { cout << "向量 v1 的第 " << v1.Find(Rand1*1.7)+1 << " 维度数值为：" << Rand1*1.7 << endl; }
    cout << endl << endl;
    cout << "----------------------------------------------测试操作函数----------------------------------------------" << endl;
    cout << endl;
}

void show4()
{
    int n;
    cout << "----------------------------------------------测试运算函数----------------------------------------------" << endl << endl;
    while (true)
    {
        cout << "请选择一类运算进行查看" << endl;
        cout << "1.向量+向量\t" << "2.向量-向量\t" << "3.向量*向量" << endl;
        cout << "4.向量+数字\t" << "5.向量-数字\t" << "6.向量*数字" << endl;
        cout << "7.向量+=数字\t" << "8.向量-=数字\t" << "9.向量*=数字" << endl;
        cout << "a.向量+=向量\t" << "b.向量-=向量" << endl;
        cout << "c.数字+向量\t" << "d.数字*向量" << endl;
        cout << "e.向量+向量（强制）" << endl;
        cout << "f.向量（某一维度）+数字" << endl;
        cout << "0.退出查看" << endl;
        cout << "注：向量V1为：空向量" << endl;
        cout << "    向量V2为：[ 1 , 2 , 3 , 4 ]" << endl;
        cout << "    向量V3为：[ 1 , 3 , 5 , 7 ]" << endl;
        cout << "    向量V4为：[ 0 , 2 , 4 , 6 , 8 ]" << endl << endl;
        n = getch()-'0';
        if (n==0) break;
        if (n==1) operate1(); if (n==2) operate2(); if (n==3) operate3();
        if (n==4) operate4(); if (n==5) operate5(); if (n==6) operate6();
        if (n==7) operate7(); if (n==8) operate8(); if (n==9) operate9();
        if (n=='a'-'0'||n=='A'-'0') operate10();
        if (n=='b'-'0'||n=='B'-'0') operate11();
        if (n=='c'-'0'||n=='C'-'0') operate12();
        if (n=='d'-'0'||n=='D'-'0') operate13();
        if (n=='e'-'0'||n=='E'-'0') operate14();
        if (n=='f'-'0'||n=='F'-'0') operate15();
    }
    cout << endl << endl;
    cout << "----------------------------------------------测试运算函数----------------------------------------------" << endl;
    cout << endl;
}

void operate1()
{
    int i;
    Vector<int> V1, V2, V3, V4, temp;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "1.向量+向量" << endl << endl;
    cout << "若将两个维度不同的向量相加" << endl;
    cout << "向量 V1 + V2 的结果为（使用重载+）："; temp=V1+V2;
    cout << "输出结果："; temp.ShowVector();
    cout << "向量 V3 + V4 的结果为（使用Plus函数）："; temp=V3.Plus(V4);
    cout << "输出结果："; temp.ShowVector();
    cout << endl;
    cout << "若将两个维度相同的向量相加" << endl;
    cout << "向量 V2 + V3 的结果为（使用重载+）：";
    (V2+V3).ShowVector();
    cout << "向量 V3 + V2 的结果为（使用Plus函数）：";
    (V3.Plus(V2)).ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}

void operate2()
{
    int i;
    Vector<int> V1, V2, V3, V4, temp;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "2.向量-向量" << endl << endl;
    cout << "若将两个维度不同的向量相减" << endl;
    cout << "向量 V1 - V2 的结果为："; temp=V1-V2;
    cout << "输出结果："; temp.ShowVector();
    cout << "向量 V3 - V4 的结果为："; temp=V3-V4;
    cout << "输出结果："; temp.ShowVector();
    cout << endl;
    cout << "若将两个维度相同的向量相减" << endl;
    cout << "向量 V2 - V3 的结果为："; (V2-V3).ShowVector();
    cout << "向量 V3 - V2 的结果为："; (V3-V2).ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate3()
{
    int i,k;
    Vector<int> V1, V2, V3, V4;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "3.向量*向量" << endl << endl;
    cout << "若将两个维度不同的向量相乘" << endl;
    cout << "向量 V1 * V2 的结果为："; k=V1*V2;
    cout << "输出结果：" << k << " 为异常值" << endl;
    cout << "向量 V3 * V4 的结果为："; k=V3*V4;
    cout << "输出结果：" << k << " 为异常值" << endl;
    cout << endl;
    cout << "若将两个维度相同的向量相乘" << endl;
    cout << "向量 V2 * V3 的结果为：" << V2*V3 << endl;
    cout << "向量 V3 * V2 的结果为：" << V3*V2 << endl;
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate4()
{
    int i;
    Vector<int> V1, V2, V4, temp;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "4.向量+数字" << endl << endl;
    cout << "若将空向量与数字相加" << endl;
    cout << "向量 V1 + 6 的结果为："; temp=V1+6;
    cout << "输出结果："; temp.ShowVector();
    cout << endl;
    cout << "若将非空向量与数字相加" << endl;
    cout << "向量 V2 + 6 的结果为："; (V2+6).ShowVector();
    cout << "向量 V4 + 6 的结果为："; (V4+6).ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate5()
{
    int i;
    Vector<int> V1, V2, V4, temp;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "5.向量-数字" << endl << endl;
    cout << "若将空向量与数字相减" << endl;
    cout << "向量 V1 - 6 的结果为："; temp=V1-6;
    cout << "输出结果："; temp.ShowVector();
    cout << endl;
    cout << "若将非空向量与数字相减" << endl;
    cout << "向量 V2 - 6 的结果为："; (V2-6).ShowVector();
    cout << "向量 V4 - 6 的结果为："; (V4-6).ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate6()
{
    int i;
    Vector<int> V1, V2, V4, temp;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "6.向量*数字" << endl << endl;
    cout << "若将空向量与数字相乘" << endl;
    cout << "向量 V1 * 6 的结果为："; temp=V1*6;
    cout << "输出结果："; temp.ShowVector();
    cout << endl;
    cout << "若将非空向量与数字相乘" << endl;
    cout << "向量 V2 * 6 的结果为："; (V2*6).ShowVector();
    cout << "向量 V4 * 6 的结果为："; (V4*6).ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate7()
{
    int i;
    Vector<int> V1, V2;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "7.向量+=数字" << endl << endl;
    cout << "若将空向量与数字加等" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V1 += 6 后\n"; V1+=6;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << endl;
    cout << "若将非空向量与数字加等" << endl;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << "向量 V2 += 6 后\n"; V2+=6;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate8()
{
    int i;
    Vector<int> V1, V2;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "8.向量-=数字" << endl << endl;
    cout << "若将空向量与数字减等" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V1 -= 6 后\n"; V1-=6;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << endl;
    cout << "若将非空向量与数字减等" << endl;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << "向量 V2 -= 6 后\n"; V2-=6;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate9()
{
    int i;
    Vector<int> V1, V2;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "9.向量*=数字" << endl << endl;
    cout << "若将空向量与数字乘等" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V1 *= 6 后\n"; V1*=6;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << endl;
    cout << "若将非空向量与数字乘等" << endl;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << "向量 V2 *= 6 后\n"; V2*=6;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate10()
{
    int i;
    Vector<int> V1, V2, V3, V4;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "a.向量+=向量" << endl << endl;
    cout << "若将两个维度不同的向量相加等" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V1 += V2 后\n"; V1+=V2;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V3 ："; V3.ShowVector();
    cout << "向量 V3 += V4 后\n"; V3+=V4;
    cout << "向量 V3 ："; V3.ShowVector();
    cout << endl;
    cout << "若将两个维度相同的向量相加等" << endl;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << "向量 V2 += V3 后\n"; V2+=V3;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate11()
{
    int i;
    Vector<int> V1, V2, V3, V4;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "b.向量-=向量" << endl << endl;
    cout << "若将两个维度不同的向量相加等" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V1 -= V2 后\n"; V1-=V2;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V3 ："; V3.ShowVector();
    cout << "向量 V3 -= V4 后\n"; V3-=V4;
    cout << "向量 V3 ："; V3.ShowVector();
    cout << endl;
    cout << "若将两个维度相同的向量相加等" << endl;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << "向量 V2 -= V3 后\n"; V2-=V3;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate12()
{
    int i;
    Vector<int> V1, V3, temp;
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "c.数字+向量" << endl << endl;
    cout << "若将数字与空向量相加" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "6 + 向量 V1 的结果为："; temp=6+V1;
    cout << "输出结果："; temp.ShowVector();
    cout << "向量 V1 ："; V1.ShowVector();
    cout << endl;
    cout << "若将数字与非空向量相加" << endl;
    cout << "向量 V3 ："; V3.ShowVector();
    cout << "6 + 向量 V3 的结果为："; (6+V3).ShowVector();
    cout << "向量 V3 ："; V3.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate13()
{
    int i;
    Vector<int> V1, V3, temp;
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "d.数字*向量" << endl << endl;
    cout << "若将数字与空向量相乘" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "6 * 向量 V1 的结果为："; temp=6*V1;
    cout << "输出结果："; temp.ShowVector();
    cout << "向量 V1 ："; V1.ShowVector();
    cout << endl;
    cout << "若将数字与非空向量相乘" << endl;
    cout << "向量 V3 ："; V3.ShowVector();
    cout << "6 * 向量 V3 的结果为："; (6*V3).ShowVector();
    cout << "向量 V3 ："; V3.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate14()
{
    int i;
    Vector<int> V1, V2, V3, V4;
    for (i=1; i<=4; i++)
    { V2.Append(i); }
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    for (i=1; i<=5; i++)
    { V4.Append(2*i-2); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "e.向量+向量（强制）" << endl << endl;
    cout << "若将空向量与空向量强制相加" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V1 + V1 后\n"; (V1).ImPlus(V1);
    cout << "向量 V1 ："; V1.ShowVector();
    cout << endl;
    cout << "若将空向量与非空向量强制相加" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V1 + V2 后\n"; (V1).ImPlus(V2);
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V2 ："; V2.ShowVector();
    cout << "向量 V2 + V1 后\n"; (V2).ImPlus(V1);
    cout << "向量 V2 ："; V2.ShowVector();
    cout << endl;
    cout << "若将两个维度相同的非空向量强制相加" << endl;
    cout << "向量 V2 ："; V2.ShowVector();
    cout << "向量 V2 + V3 后\n"; (V2).ImPlus(V3);
    cout << "向量 V2 ："; V2.ShowVector();
    cout << endl;
    cout << "若将两个维度不同的非空向量强制相加" << endl;
    cout << "向量 V3 ："; V3.ShowVector();
    cout << "向量 V3 + V4 后\n"; (V3).ImPlus(V4);
    cout << "向量 V3 ："; V3.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}
void operate15()
{
    int i;
    Vector<int> V1, V3;
    for (i=1; i<=4; i++)
    { V3.Append(2*i-1); }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "f.向量（某一维度）+数字" << endl << endl;
    cout << "若将空向量的某一维度加一个数字" << endl;
    cout << "向量 V1 ："; V1.ShowVector();
    cout << "向量 V1 的第 4 维度数值加 2\n"; V1.Plus(4-1,2);
    cout << "向量 V1 ："; V1.ShowVector();
    cout << endl;
    cout << "若将非空向量的某一维度加一个数字" << endl;
    cout << "向量 V3 ："; V3.ShowVector();
    cout << "向量 V3 的第 20 维度数值加 2\n"; V3.Plus(20-1,2);
    cout << "向量 V3 ："; V3.ShowVector();
    cout << "向量 V3 的第 -10 维度数值加 2\n"; V3.Plus(-10-1,2);
    cout << "向量 V3 ："; V3.ShowVector();
    cout << "向量 V3 的第 1 维度数值加 2\n"; V3.Plus(1-1,2);
    cout << "向量 V3 ："; V3.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}

void test2()
{

    int n, k, i;
    double p;
    while (true)
    {
        cout << "\n请输入您所需要用到的向量数量（整数）" << endl;
        cin >> p;
        k = (int)p;
        if (k>10)
        {
            cout << "输入的数字较大！您确定需要用到这么多向量吗？[Y/N]" << endl;
            n = getch();
            while (n!='N'&&n!='n'&&n!='Y'&&n!='y')
            { n = getch(); }
            if (n=='Y'||n=='y') { cout << "输入有效" << endl; break; }
            else { cout << "输入无效" << endl; }
        }
        else if (k>0&&k<=10) { cout << "输入有效" << endl; break; }
        else { cout << "输入无效" << endl; }
    }
    cout << "\n请选择您所需要用到的向量类型" << endl;
    cout << "(1)int 型" << endl;
    cout << "(2)double 型" << endl;
    cout << "(3)unsigned long long 型" << endl << endl;
    n = getch()-'0';
    if (n==1) { choose1(k); }
    if (n==2) { choose2(k); }
    if (n==3) { choose3(k); }

    cout << "See you, Vector World!" << endl;
}


int chooseIfModify()
{
    int n;
    cout << "是否需要初始化您的向量？[Y/N]（若不进行初始化，您的向量将默认其为0维空向量）" << endl << endl;
    while (n!='N'&&n!='n'&&n!='Y'&&n!='y')
    { n = getch(); }
    if (n=='Y'||n=='y') return 1;
    else return 0;
}

int chooseModifyNum(int k1)
{
    int p, k2;
    cout << "请输入您所需要初始化的向量数量（整数）" << endl;
    cin >> p;
    k2 = (int)p;
    while (k2>k1)
    {
        cout << "输入无效，您的初始化向量数量超出向量总数" << endl;
        cout << "请重新输入您所需要初始化的向量数量（整数）" << endl;
        cin >> p;
        k2 = (int)p;
    }
    cout << "输入有效" << endl;
    return k2;
}

void choose1(int k1)
{
    int i, p, k2, w;
    Vector<int> V[k1];
    if (chooseIfModify())
    {
        k2 = chooseModifyNum(k1);
        for (i=0; i<k2 ;i++)
        {
            cout << "向量 V[" << i << "] 的维度为：";
            cin >> p; w = (int)p;
            while (w<=0)
            {
                cout << "输入无效，请重新输入维度数：" << endl;
                cin >> w;
            }
            V[i].Resize(w);
            cout << "向量 V[" << i << "] 的初始化值为：";
            V[i] = V[i].SetVector();
        }
    }
}

void choose2(int k1)
{
    int i, p, k2, w;
    Vector<double> V[k1];
    if (chooseIfModify())
    {
        k2 = chooseModifyNum(k1);
        for (i=0; i<k2 ;i++)
        {
            cout << "向量 V[" << i << "] 的维度为：";
            cin >> p; w = (int)p;
            while (w<=0)
            {
                cout << "输入无效，请重新输入维度数：" << endl;
                cin >> w;
            }
            V[i].Resize(w);
            cout << "向量 V[" << i << "] 的初始化值为：";
            V[i] = V[i].SetVector();
        }
    }
}

void choose3(int k1)
{
    int i, p, k2, w;
    Vector<unsigned long long> V[k1];
    if (chooseIfModify())
    {
        k2 = chooseModifyNum(k1);
        for (i=0; i<k2 ;i++)
        {
            cout << "向量 V[" << i << "] 的维度为：";
            cin >> p; w = (int)p;
            while (w<=0)
            {
                cout << "输入无效，请重新输入维度数：" << endl;
                cin >> w;
            }
            V[i].Resize(w);
            cout << "向量 V[" << i << "] 的初始化值为：";
            V[i] = V[i].SetVector();
        }
    }
}







