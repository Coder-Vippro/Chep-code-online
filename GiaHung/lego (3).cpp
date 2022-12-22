#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("lego.inp","r",stdin);
    freopen("lego.out","w",stdout);
    int a,b,n;
    cin>>a>>b>>n;
    int ma=max(a,b);
    int mi=min(a,b);
    int sl=n/ma;
    for(int i=sl;i>=0;i--)
    {
        int cl=n-i*ma;
        if(cl%mi==0)
        {
            cout<<i+cl/mi;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
