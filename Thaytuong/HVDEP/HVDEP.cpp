#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{
    freopen("HVDEP.INP","r",stdin);
    freopen("HVDEP.OUT","w",stdout);
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(n>1 && n<3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n==3)
    {
        cout<<3<<' '<<1<<' '<<4<<' '<<2;
        return 0;
    }
        for(int j=1;j<=n;j++)
            {
                if(j%2==1)
                cout<<j<<' ';
            }
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            cout<<i<<" ";
        }
    
    
    return 0;
}
