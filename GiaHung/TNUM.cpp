#include <bits/stdc++.h>
using namespace std;
bool tnum(int n)
{
   
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        dem++;
    }
    if(dem==3)
    return true;
    else return false;
}
int n,k;
int main()
{
    freopen("TNUM.INP","r",stdin);
    freopen("TNUM.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n>0)
    {
        cin>>k;
        if(tnum(k)==true)
        {
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
        n--;
    }
}