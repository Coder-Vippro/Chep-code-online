#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    if(n%i==0) return false;
    return true;
}
int tpb(int n)
{
    int t=0;
    while (n>0)
    {
        int cs=n%10;
        t=t+cs*cs;
        n=n/10;
    }
    return t;
}
int bestNumber(int l, int r)
{
    int ma=0,luu=-1;
    for(int i=l;i<=r;i++)
        if(ktnt(i))
        {
            int t=tpb(i);
            if(ma<=t) { ma=t;luu=i;};
        }
    return luu;
}
int main() {
    freopen("SOTOT.inp","r",stdin);
    freopen("SOTOT.out","w",stdout);
     int a,b;
     cin>>a>>b;
     cout<<bestNumber(a,b);

    return 0;
}
