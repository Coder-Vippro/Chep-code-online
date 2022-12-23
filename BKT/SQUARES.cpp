#include <bits/stdc++.h>

using namespace std;
bool mang(int n, int a[], int m)
{
    for(int i=1;i<=m;i++)
    {
        if(a[i]==n)return true;
    }
    return false;
}
int a[1000000];
int main()
{
    freopen("SQUARES.inp","r",stdin);
    freopen("SQUARES.out","w",stdout);
    int n, m ,x, d1=0, d=0;
    cin>>n>>m>>x;
    for(int i=1;i<=m;i++)cin>>a[i];
    for(int i=x;i<=n;i++){
        if(l(i, a, m)==1)d++;
    }
    for(int i=1;i<=x;i++){
        if(l(i, a, m)==1)d1++;
    }
    cout<<min(d1, d);
    return 0;
}
