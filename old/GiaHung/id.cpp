#include <bits/stdc++.h>

using namespace std;
int luu[6]={17,3,23,7,22,5};
char id(int n)
{
    int t=0,d=0;
    while(n!=0)
    {
        t=t+n%10*luu[d];
        n=n/10;
        d++;
    }
    char luu=char(t%13+65);
    return luu;
}
int main()
{
    freopen("id.inp","r",stdin);
    freopen("id.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        cout<<id(a)<<endl;
    }
    return 0;
}
