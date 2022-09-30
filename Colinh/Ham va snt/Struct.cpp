#include <bits/stdc++.h>
using namespace std;
struct hs
{
    string ten;
    int toan, van;
};
int n;          
hs a[10000];

bool cmp(hs X, hs Y)
{
    if (X.toan + X.van == Y.toan + Y.van) return X.ten < Y.ten;
    return X.toan + X.van > Y.toan + Y.van;
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        string ten;
        int t, v;
        cin >> ten >> t >> v;
        a[i] = {ten, t, v};
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1; i<=n; i++)
        cout << a[i].ten << " " << a[i].toan << " " << a[i].van << " " << a[i].toan + a[i]  .van << '\n';
    return 0;
}