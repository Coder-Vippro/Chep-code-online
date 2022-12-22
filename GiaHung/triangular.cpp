#include <bits/stdc++.h>
using namespace std;
bool kttg(int n)
{
    int tong=0;
    for(int i=1;i<=n/2;i++)
    {
        if(tong<n)
        {
            tong=tong+i;
        }
        if(tong>n)
        {
            return false;
        }
        if(tong==n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("triangular.INP","r",stdin);
    freopen("triangular.OUT","w",stdout);
    int n;
    cin>>n;
    int k;
    while(n--)
    {
        cin>>k;
        if(kttg(k)==true)
        cout<<1<<endl;
        else cout<<0<<endl;
    }
}
