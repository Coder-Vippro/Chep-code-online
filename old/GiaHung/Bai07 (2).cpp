#include <bits/stdc++.h>

using namespace std;
int n,k;
long a,b;
bool ok;
bool nt(long x)
{
    if(x<2) return false;
    if(x==2) return true;
    if(x>2)
    {
        if(x%2==0) return false;
        for(int h=3;h*h<=x;h=h+2)
            if(x%h==0)
                return false;
    }
    return true;
}
int tongcs(long y)
{
    int s=0,du;
    while(y>0)
    {
        du=y%10;
        s=s+du;
        y=y/10;
    }
    return s;
}
int main()
{
    freopen("Bai07.inp","r",stdin);
    freopen("Bai07.out","w",stdout);
    cin>>n>>k;
    a=pow(10,n-1);
    b=pow(10,n)-1;
    for(long i=b;i>=a;i--)
        if(nt(i)&&tongcs(i)==k)
    {
            cout<<i;
            ok=true;
            break;
    }
    if(!ok)
        cout<<-1;
    return 0;
}

