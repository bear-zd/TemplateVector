#include <bits/stdc++.h>
#include "Vector.h"
using namespace std;
int main()
{
    int n;
    Vector<int> v1, v2(3), v3(3,2),v4;
    v1.ShowVector();
    v2.ShowVector();
    v3.ShowVector();
    Vector<double> V1(2,3.1416), V2(V1), V3=V2;
    V1.ShowVector();
    V2.ShowVector();
    V3.ShowVector();

    v1.SetVector();
    if (v1.Empty())
    {
        cout << "Set the Dimension of the Vector: ";
        cin >> n;
        v1.Resize(n);
        v1.SetVector();
        v1.ShowVector();
    }
    v2.SetVector();
    v2.ShowVector();
    v2.ShowD();
    cout << v2.GetD() << endl;
    cout << v2.Mod() << endl;
    v3.SetVector();
    v3.ShowVector();
    cout << v3.Find(4) << endl;
    v3.Append();
    v3.ShowVector();
    cin >> n;
    v3.Append(n);
    v3.ShowVector();
    cout << v3.Find(4) << endl;
    v3.Pop();
    v4.Pop();
    v4.ShowVector();
    v3.ShowVector();
    v3.Normalize();
    v3.ShowVector();

    (v2.Plus(v3)).ShowVector();
    (v2.ImPlus(v3)).ShowVector();
    (v2.Plus(1,3)).ShowVector();

    v2.SetVector();
    v3.SetVector();
    v2.Resize(v3.GetD());
    (v2+v3).ShowVector();
    (v2+3).ShowVector();
    (v3+=v2).ShowVector();
    (v3+=1).ShowVector();

    (v2-v3).ShowVector();
    (v2-3).ShowVector();
    (v3-=v2).ShowVector();
    (v3-=1).ShowVector();

    v2.Resize(v3.GetD());
    v2.SetVector();
    v3.SetVector();
    (v2*3).ShowVector();
    cout << v2*v3 << endl;
    (v2*=2).ShowVector();
    cout << v2*v3 << endl;

    v3.SetVector();
    (2+v3).ShowVector();
    (2*v3).ShowVector();
    return 0;
}
