#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    if(n<2)
    return false;
    if(n==2)
    return true;
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
int main()
{
    freopen("ANALYSE.INP","r",stdin);
    freopen("ANALYSE.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    int dem;
    int tong=1;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            tong=tong*i;
        }
        for(int i=2;i<=n;i++)
        {
            if(ktnt(i)==true)
            {
              while(tong%i==0)
            {
                tong=tong/i;
                dem++;
            } 
            }
            if(ktnt(i)==true)
            cout<<dem<<' ';
        }
        cout<<dem<<' ';
        cout<<'\n';
        dem=0;
        tong=1;
    }
}