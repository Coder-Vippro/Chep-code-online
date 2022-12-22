#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("MINSUM.INP","r",stdin);
    freopen("MINSUM.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int l,r;
    cin>>l>>r;
    int tong=l+r;
    bool kn=0;
    for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=r;j++)
            if(gcd(i,j)==l && i*j/(gcd(i,j))==r && i+j<tong)
            {
                tong=i+j;
                kn=1;
            }
        }
        if(kn==0)
        {
            cout<<-1;
        }
        else cout<<tong;
        
}