#include <bits/stdc++.h>
using namespace std;
bool ktnt(long long x) 
{
    if(x<2)return false;
    if(x==2)return true;
    for(long long i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
    freopen("KNTO.INP","r",stdin);
    freopen("KNTO.OUT","w",stdout);
    long long n;
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && ktnt(i)==false)
        dem++;
    }
    cout<<dem;

}