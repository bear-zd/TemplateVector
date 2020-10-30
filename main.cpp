#include <bits/stdc++.h>
#include "Vector.h"
using namespace std;
int main()
{
    Vector<int> t3;
    Vector<int> t4(3,8);
    t3.Resize(5);
    t3.ShowVector();
    t4.Resize(5);
    t4.ShowVector();
    t4=t3+t4;
    t3=2+t3;
    t3.ShowVector();
    t3.ShowVector();
    t4.SetVector();
    (t4-t3).ShowVector();
    cout<<t4<<endl;
    return 0;
}
