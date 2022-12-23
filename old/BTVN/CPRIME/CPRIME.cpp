#include<bits/stdc++.h>
using namespace std;
bool ktnt(int n) 
{
    if(n==2)
    return true;
    if(n<2) return false;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        dem++;
    }
    if(dem==2)
    return true;
    else return false;
}
int n;
int main()
{
    freopen("CPRIME.INP","r",stdin);
    freopen("CPRIME.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(snt(n)==true)
    {
        cout<<1;
    }
    else cout<<0;
}