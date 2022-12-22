#include <bits/stdc++.h>
using namespace std;
int m,n;
int main()
{
    freopen("Vn.INP","r",stdin);
    freopen("Vn.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    int k;
    if(m>n)
    {
        k=m;
    }
    else k=n;
    int h;
    for(int i=k;i>=2;i--)
    {
        if(m%i==0 && n%i==0)
        {
            cout<<i<<endl;
            cout<<m/i<<' '<<n/i;
            return 0;
        }
    }
    
    


}