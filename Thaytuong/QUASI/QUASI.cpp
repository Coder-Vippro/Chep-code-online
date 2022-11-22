#include <bits/stdc++.h>
using namespace std;
bool kt(int n, int d)
{
    int tong=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)tong=tong+i;
    }
    if(abs(tong-n)<=d)
    return true;
    return false;
}
int main()
{
    //freopen("QUASI.INP","r",stdin);
    //freopen("QUASI.OUT","w",stdout);
    int n,k;
    cin>>n>>k;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(kt(i,k)==true)
        {
            cout<<i<<' ';
            dem++;
        }
    }
    cout<<dem;
}
