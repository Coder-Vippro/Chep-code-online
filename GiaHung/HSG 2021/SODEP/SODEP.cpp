#include <bits/stdc++.h>

using namespace std;
bool ktnt(int n)
{
    if(n<2)
        retur   n false;
    if(n==2) return true;
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
bool kt(int n)
{
    if(n%2==0)
        return false;
    if(ktnt(n)==false || ktnt((n+1)/2)==false)
        return false;
    else return true;
}
int main()
{
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    int n;
    int a,b;
    cin>>n;
    int dem;
    while(n>0)
    {
        dem=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(kt(i)==true)
                dem++;
        }
        cout<<dem<<'\n';
        n--;
    }
    return 0;
}
