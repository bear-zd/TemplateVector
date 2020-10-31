#include <bits/stdc++.h>
#include "Vector.h"
using namespace std;
int main()
{
    Vector<int> t3,t1;
    Vector<int> t4(2,8),t5(2,8);
    t1.Mod();
    t1+t4;
    t1+t3;
    t4+t1;
    t1*t4;
    int sum=t4*t5;
    cout<<sum<<endl;
    return 0;
}
