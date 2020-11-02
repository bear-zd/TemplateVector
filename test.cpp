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
        cout << "\n��ѡ��һ�ຯ�����в鿴" << endl;
        cout << "(1)�Ĵ��캯��" << endl;
        cout << "(2)���Ժ���" << endl;
        cout << "(3)��������" << endl;
        cout << "(4)���㺯��" << endl;
        cout << "(0)�˳��鿴" << endl << endl;
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
    cout << "--------------------------------------------�����Ĵ��캯��--------------------------------------------" << endl << endl;
    cout << "����һ��ά��Ϊ 0 ��(int)���� V1 ��";
    V1.ShowVector();
    cout << endl;
    cout << "����һ��ά��Ϊ " << Rand1 << " ��(int)���� V2 ��";
    V2.ShowVector();
    cout << endl;
    cout << "����һ��ά��Ϊ " << Rand2 << " ��ʼֵ��Ϊ " << Rand3 << " ��(int)���� V3 ��";
    V3.ShowVector();
    cout << endl;
    cout << "����һ��ά��Ϊ " << Rand2 << " ��ʼֵ��Ϊ 3.1416 ��(double)���� v1 ��";
    v1.ShowVector();
    cout << endl;
    cout << "������ v1 ������������ v2 ��";
    v2.ShowVector();
    cout << endl;
    cout << "������ v2 ��ֵ�������� v3 ��";
    v3.ShowVector();
    cout << endl << endl;
    cout << "--------------------------------------------�����Ĵ��캯��--------------------------------------------" << endl;
    cout << endl;
}

void show2()
{
    int Rand1, Rand2;
    double temp;
    Rand1 = (rand()%15)/2+2;
    Rand2 = rand()%40;
    Vector<double> v1,v2(Rand1,Rand2*1.4);
    cout << "----------------------------------------------�������Ժ���----------------------------------------------" << endl << endl;
    cout << "����һ��ά��Ϊ 0 ��(double)���� v1 ��" << endl << endl;
    cout << "��������ǿ���������ά��Ϊ0����" << endl;
    if (v1.Empty())
        {
            cout << "�ǣ����������ά��Ϊ��0  ";
            v1.ShowD();
            cout << endl;
            cout << "���������ģ��Ϊ��"; temp=v1.Mod();
            cout << "��������" << temp << endl << endl;
            cout << "��������������������� v1 ��";
            cout << v1 << endl << endl;
            cout << "���������λ����Ϊ��" << endl;
            v1.Normalize();
            cout << "���� v1 ��";
            v1.ShowVector();
        }
    cout << endl << endl << endl;
    cout << "����һ��ά��Ϊ " << Rand1 << " ��ʼֵ��Ϊ " << Rand2*1.4 << " ��(double)���� v2 ��";
    v2.ShowVector();
    cout << endl;
    cout << "��������ǿ���������ά��Ϊ0����" << endl;
    if (v2.Empty()) { cout << "�ǣ����������ά��Ϊ��0  "; v2.ShowD(); }
    else
    {
        cout << "�������������ά��Ϊ��" << v2.GetD() << "  ";
        v2.ShowD();
        cout << endl;
        cout << "���� v2 �ĵ� 1 ά����ֵΪ��" << v2[0] <<endl;
        cout << "���� v2 �ĵ� 100 ά����ֵΪ��"; temp=v2[99];
        cout << "��������" << temp << " Ϊ�쳣ֵ" << endl << endl;
        cout << "���������ģ��Ϊ��" << v2.Mod() << endl;
        v2.Normalize();
        cout << endl;
        cout << "���������λ����Ϊ��";
        v2.ShowVector();
    }
    cout << endl << endl;
    cout << "----------------------------------------------�������Ժ���----------------------------------------------" << endl;
    cout << endl;
}

void show3()
{
    int Rand1,i;
    Rand1 = (rand()%6)+2;
    Vector<double> v1(Rand1,2.7183);
    cout << "----------------------------------------------���Բ�������----------------------------------------------" << endl << endl;
    cout << "����һ��ά��Ϊ " << Rand1 << " ��ʼֵ��Ϊ 2.7183 ��(double)���� v1 ��";
    v1.ShowVector();
    cout << endl;
    cout << "������ v1 ��ά�ȸ���Ϊ��" << Rand1*2-15 << endl;
    v1.Resize(Rand1*2-15);
    cout << "���� v1 ��";
    v1.ShowVector();
    cout << endl;
    cout << "������ v1 ��ĩβɾ��һ������\t";
    v1.Pop();
    cout << "���� v1 ��";
    v1.ShowVector();
    cout << endl;
    cout << "������ v1 ��ά�ȸ���Ϊ��" << Rand1/2+2 << "\n";
    v1.Resize(Rand1/2+2);
    v1.Resize(0);
    cout << "������ v1 ��ֵ����Ϊ��";
    for (i=1; i<=Rand1/2+2; i++)
    { v1.Append(2.7183*i); }
    v1.ShowVector();
    cout << endl;
    cout << "������ v1 ��ĩβ���һ�����֣�" << Rand1/2+2 << "." << Rand1/2+2 << "��" << endl;
    v1.Append((Rand1/2+2)*1.1);
    cout << "���� v1 ��";
    v1.ShowVector();
    cout << endl;
    cout << "������ v1 �в������֣�" << (Rand1/2+2)*1.1 << "����" << endl;
    if (v1.Find((Rand1/2+2)*1.1)==-1) { cout << "���� " << (Rand1/2+2)*1.1 << " û�г��������� v1 ��" << endl; }
    else { cout << "���� v1 �ĵ� " << v1.Find((Rand1/2+2)*1.1)+1 << " ά����ֵΪ��" << (Rand1/2+2)*1.1 << endl << endl; }
    cout << "������ v1 ��ĩβɾ��һ������" << endl;
    v1.Pop();
    cout << "���� v1 ��";
    v1.ShowVector();
    cout << endl;
    cout << "������ v1 �в������֣�" << Rand1*1.7 << "����" << endl;
    if (v1.Find(Rand1*1.7)==-1) { cout << "���� " << Rand1*1.7 << " û�г��������� v1 ��" << endl; }
    else { cout << "���� v1 �ĵ� " << v1.Find(Rand1*1.7)+1 << " ά����ֵΪ��" << Rand1*1.7 << endl; }
    cout << endl << endl;
    cout << "----------------------------------------------���Բ�������----------------------------------------------" << endl;
    cout << endl;
}

void show4()
{
    int n;
    cout << "----------------------------------------------�������㺯��----------------------------------------------" << endl << endl;
    while (true)
    {
        cout << "��ѡ��һ��������в鿴" << endl;
        cout << "1.����+����\t" << "2.����-����\t" << "3.����*����" << endl;
        cout << "4.����+����\t" << "5.����-����\t" << "6.����*����" << endl;
        cout << "7.����+=����\t" << "8.����-=����\t" << "9.����*=����" << endl;
        cout << "a.����+=����\t" << "b.����-=����" << endl;
        cout << "c.����+����\t" << "d.����*����" << endl;
        cout << "e.����+������ǿ�ƣ�" << endl;
        cout << "f.������ĳһά�ȣ�+����" << endl;
        cout << "0.�˳��鿴" << endl;
        cout << "ע������V1Ϊ��������" << endl;
        cout << "    ����V2Ϊ��[ 1 , 2 , 3 , 4 ]" << endl;
        cout << "    ����V3Ϊ��[ 1 , 3 , 5 , 7 ]" << endl;
        cout << "    ����V4Ϊ��[ 0 , 2 , 4 , 6 , 8 ]" << endl << endl;
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
    cout << "----------------------------------------------�������㺯��----------------------------------------------" << endl;
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
    cout << "1.����+����" << endl << endl;
    cout << "��������ά�Ȳ�ͬ���������" << endl;
    cout << "���� V1 + V2 �Ľ��Ϊ��ʹ������+����"; temp=V1+V2;
    cout << "��������"; temp.ShowVector();
    cout << "���� V3 + V4 �Ľ��Ϊ��ʹ��Plus��������"; temp=V3.Plus(V4);
    cout << "��������"; temp.ShowVector();
    cout << endl;
    cout << "��������ά����ͬ���������" << endl;
    cout << "���� V2 + V3 �Ľ��Ϊ��ʹ������+����";
    (V2+V3).ShowVector();
    cout << "���� V3 + V2 �Ľ��Ϊ��ʹ��Plus��������";
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
    cout << "2.����-����" << endl << endl;
    cout << "��������ά�Ȳ�ͬ���������" << endl;
    cout << "���� V1 - V2 �Ľ��Ϊ��"; temp=V1-V2;
    cout << "��������"; temp.ShowVector();
    cout << "���� V3 - V4 �Ľ��Ϊ��"; temp=V3-V4;
    cout << "��������"; temp.ShowVector();
    cout << endl;
    cout << "��������ά����ͬ���������" << endl;
    cout << "���� V2 - V3 �Ľ��Ϊ��"; (V2-V3).ShowVector();
    cout << "���� V3 - V2 �Ľ��Ϊ��"; (V3-V2).ShowVector();
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
    cout << "3.����*����" << endl << endl;
    cout << "��������ά�Ȳ�ͬ���������" << endl;
    cout << "���� V1 * V2 �Ľ��Ϊ��"; k=V1*V2;
    cout << "��������" << k << " Ϊ�쳣ֵ" << endl;
    cout << "���� V3 * V4 �Ľ��Ϊ��"; k=V3*V4;
    cout << "��������" << k << " Ϊ�쳣ֵ" << endl;
    cout << endl;
    cout << "��������ά����ͬ���������" << endl;
    cout << "���� V2 * V3 �Ľ��Ϊ��" << V2*V3 << endl;
    cout << "���� V3 * V2 �Ľ��Ϊ��" << V3*V2 << endl;
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
    cout << "4.����+����" << endl << endl;
    cout << "�������������������" << endl;
    cout << "���� V1 + 6 �Ľ��Ϊ��"; temp=V1+6;
    cout << "��������"; temp.ShowVector();
    cout << endl;
    cout << "�����ǿ��������������" << endl;
    cout << "���� V2 + 6 �Ľ��Ϊ��"; (V2+6).ShowVector();
    cout << "���� V4 + 6 �Ľ��Ϊ��"; (V4+6).ShowVector();
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
    cout << "5.����-����" << endl << endl;
    cout << "�������������������" << endl;
    cout << "���� V1 - 6 �Ľ��Ϊ��"; temp=V1-6;
    cout << "��������"; temp.ShowVector();
    cout << endl;
    cout << "�����ǿ��������������" << endl;
    cout << "���� V2 - 6 �Ľ��Ϊ��"; (V2-6).ShowVector();
    cout << "���� V4 - 6 �Ľ��Ϊ��"; (V4-6).ShowVector();
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
    cout << "6.����*����" << endl << endl;
    cout << "�������������������" << endl;
    cout << "���� V1 * 6 �Ľ��Ϊ��"; temp=V1*6;
    cout << "��������"; temp.ShowVector();
    cout << endl;
    cout << "�����ǿ��������������" << endl;
    cout << "���� V2 * 6 �Ľ��Ϊ��"; (V2*6).ShowVector();
    cout << "���� V4 * 6 �Ľ��Ϊ��"; (V4*6).ShowVector();
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
    cout << "7.����+=����" << endl << endl;
    cout << "���������������ּӵ�" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V1 += 6 ��\n"; V1+=6;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << endl;
    cout << "�����ǿ����������ּӵ�" << endl;
    cout << "���� V2 ��"; V2.ShowVector();
    cout << "���� V2 += 6 ��\n"; V2+=6;
    cout << "���� V2 ��"; V2.ShowVector();
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
    cout << "8.����-=����" << endl << endl;
    cout << "���������������ּ���" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V1 -= 6 ��\n"; V1-=6;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << endl;
    cout << "�����ǿ����������ּ���" << endl;
    cout << "���� V2 ��"; V2.ShowVector();
    cout << "���� V2 -= 6 ��\n"; V2-=6;
    cout << "���� V2 ��"; V2.ShowVector();
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
    cout << "9.����*=����" << endl << endl;
    cout << "���������������ֳ˵�" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V1 *= 6 ��\n"; V1*=6;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << endl;
    cout << "�����ǿ����������ֳ˵�" << endl;
    cout << "���� V2 ��"; V2.ShowVector();
    cout << "���� V2 *= 6 ��\n"; V2*=6;
    cout << "���� V2 ��"; V2.ShowVector();
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
    cout << "a.����+=����" << endl << endl;
    cout << "��������ά�Ȳ�ͬ��������ӵ�" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V1 += V2 ��\n"; V1+=V2;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V3 ��"; V3.ShowVector();
    cout << "���� V3 += V4 ��\n"; V3+=V4;
    cout << "���� V3 ��"; V3.ShowVector();
    cout << endl;
    cout << "��������ά����ͬ��������ӵ�" << endl;
    cout << "���� V2 ��"; V2.ShowVector();
    cout << "���� V2 += V3 ��\n"; V2+=V3;
    cout << "���� V2 ��"; V2.ShowVector();
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
    cout << "b.����-=����" << endl << endl;
    cout << "��������ά�Ȳ�ͬ��������ӵ�" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V1 -= V2 ��\n"; V1-=V2;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V3 ��"; V3.ShowVector();
    cout << "���� V3 -= V4 ��\n"; V3-=V4;
    cout << "���� V3 ��"; V3.ShowVector();
    cout << endl;
    cout << "��������ά����ͬ��������ӵ�" << endl;
    cout << "���� V2 ��"; V2.ShowVector();
    cout << "���� V2 -= V3 ��\n"; V2-=V3;
    cout << "���� V2 ��"; V2.ShowVector();
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
    cout << "c.����+����" << endl << endl;
    cout << "������������������" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "6 + ���� V1 �Ľ��Ϊ��"; temp=6+V1;
    cout << "��������"; temp.ShowVector();
    cout << "���� V1 ��"; V1.ShowVector();
    cout << endl;
    cout << "����������ǿ��������" << endl;
    cout << "���� V3 ��"; V3.ShowVector();
    cout << "6 + ���� V3 �Ľ��Ϊ��"; (6+V3).ShowVector();
    cout << "���� V3 ��"; V3.ShowVector();
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
    cout << "d.����*����" << endl << endl;
    cout << "������������������" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "6 * ���� V1 �Ľ��Ϊ��"; temp=6*V1;
    cout << "��������"; temp.ShowVector();
    cout << "���� V1 ��"; V1.ShowVector();
    cout << endl;
    cout << "����������ǿ��������" << endl;
    cout << "���� V3 ��"; V3.ShowVector();
    cout << "6 * ���� V3 �Ľ��Ϊ��"; (6*V3).ShowVector();
    cout << "���� V3 ��"; V3.ShowVector();
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
    cout << "e.����+������ǿ�ƣ�" << endl << endl;
    cout << "�����������������ǿ�����" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V1 + V1 ��\n"; (V1).ImPlus(V1);
    cout << "���� V1 ��"; V1.ShowVector();
    cout << endl;
    cout << "������������ǿ�����ǿ�����" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V1 + V2 ��\n"; (V1).ImPlus(V2);
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V2 ��"; V2.ShowVector();
    cout << "���� V2 + V1 ��\n"; (V2).ImPlus(V1);
    cout << "���� V2 ��"; V2.ShowVector();
    cout << endl;
    cout << "��������ά����ͬ�ķǿ�����ǿ�����" << endl;
    cout << "���� V2 ��"; V2.ShowVector();
    cout << "���� V2 + V3 ��\n"; (V2).ImPlus(V3);
    cout << "���� V2 ��"; V2.ShowVector();
    cout << endl;
    cout << "��������ά�Ȳ�ͬ�ķǿ�����ǿ�����" << endl;
    cout << "���� V3 ��"; V3.ShowVector();
    cout << "���� V3 + V4 ��\n"; (V3).ImPlus(V4);
    cout << "���� V3 ��"; V3.ShowVector();
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
    cout << "f.������ĳһά�ȣ�+����" << endl << endl;
    cout << "������������ĳһά�ȼ�һ������" << endl;
    cout << "���� V1 ��"; V1.ShowVector();
    cout << "���� V1 �ĵ� 4 ά����ֵ�� 2\n"; V1.Plus(4-1,2);
    cout << "���� V1 ��"; V1.ShowVector();
    cout << endl;
    cout << "�����ǿ�������ĳһά�ȼ�һ������" << endl;
    cout << "���� V3 ��"; V3.ShowVector();
    cout << "���� V3 �ĵ� 20 ά����ֵ�� 2\n"; V3.Plus(20-1,2);
    cout << "���� V3 ��"; V3.ShowVector();
    cout << "���� V3 �ĵ� -10 ά����ֵ�� 2\n"; V3.Plus(-10-1,2);
    cout << "���� V3 ��"; V3.ShowVector();
    cout << "���� V3 �ĵ� 1 ά����ֵ�� 2\n"; V3.Plus(1-1,2);
    cout << "���� V3 ��"; V3.ShowVector();
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;
}

void test2()
{

    int n, k, i;
    double p;
    while (true)
    {
        cout << "\n������������Ҫ�õ�������������������" << endl;
        cin >> p;
        k = (int)p;
        if (k>10)
        {
            cout << "��������ֽϴ���ȷ����Ҫ�õ���ô��������[Y/N]" << endl;
            n = getch();
            while (n!='N'&&n!='n'&&n!='Y'&&n!='y')
            { n = getch(); }
            if (n=='Y'||n=='y') { cout << "������Ч" << endl; break; }
            else { cout << "������Ч" << endl; }
        }
        else if (k>0&&k<=10) { cout << "������Ч" << endl; break; }
        else { cout << "������Ч" << endl; }
    }
    cout << "\n��ѡ��������Ҫ�õ�����������" << endl;
    cout << "(1)int ��" << endl;
    cout << "(2)double ��" << endl;
    cout << "(3)unsigned long long ��" << endl << endl;
    n = getch()-'0';
    if (n==1) { choose1(k); }
    if (n==2) { choose2(k); }
    if (n==3) { choose3(k); }

    cout << "See you, Vector World!" << endl;
}


int chooseIfModify()
{
    int n;
    cout << "�Ƿ���Ҫ��ʼ������������[Y/N]���������г�ʼ��������������Ĭ����Ϊ0ά��������" << endl << endl;
    while (n!='N'&&n!='n'&&n!='Y'&&n!='y')
    { n = getch(); }
    if (n=='Y'||n=='y') return 1;
    else return 0;
}

int chooseModifyNum(int k1)
{
    int p, k2;
    cout << "������������Ҫ��ʼ��������������������" << endl;
    cin >> p;
    k2 = (int)p;
    while (k2>k1)
    {
        cout << "������Ч�����ĳ�ʼ����������������������" << endl;
        cout << "����������������Ҫ��ʼ��������������������" << endl;
        cin >> p;
        k2 = (int)p;
    }
    cout << "������Ч" << endl;
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
            cout << "���� V[" << i << "] ��ά��Ϊ��";
            cin >> p; w = (int)p;
            while (w<=0)
            {
                cout << "������Ч������������ά������" << endl;
                cin >> w;
            }
            V[i].Resize(w);
            cout << "���� V[" << i << "] �ĳ�ʼ��ֵΪ��";
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
            cout << "���� V[" << i << "] ��ά��Ϊ��";
            cin >> p; w = (int)p;
            while (w<=0)
            {
                cout << "������Ч������������ά������" << endl;
                cin >> w;
            }
            V[i].Resize(w);
            cout << "���� V[" << i << "] �ĳ�ʼ��ֵΪ��";
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
            cout << "���� V[" << i << "] ��ά��Ϊ��";
            cin >> p; w = (int)p;
            while (w<=0)
            {
                cout << "������Ч������������ά������" << endl;
                cin >> w;
            }
            V[i].Resize(w);
            cout << "���� V[" << i << "] �ĳ�ʼ��ֵΪ��";
            V[i] = V[i].SetVector();
        }
    }
}







