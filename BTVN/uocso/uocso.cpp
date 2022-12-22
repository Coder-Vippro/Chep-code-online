#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("uocso.INP","r",stdin);
    freopen("uocso.OUT","w",stdout);
    int n;
    cin>>n;
    int m,k;
    int dem=0;
    while(n--)
    {
        cin>>m>>k;
        for(int i=1;i<=m*k;i++)
        if(m*k%i==0)
        dem++
    }
    cout<<dem;
}