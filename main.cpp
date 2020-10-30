#include <bits/stdc++.h>
#include "Vector.h"
using namespace std;
int main()
{
    Vector<int> t1(5,1);
    Vector<double> t2(5,1);
    t2.Normalize();
    t2.Resize(0);
    t2.Pop();
    t2.ShowVector();
    Vector<int> t3;
    t3.Append(9);
    t3.ShowD();
    t3.ShowVector();
    return 0;
}
