#include <bits/stdc++.h>
using namespace std;
bool sodep(int n)
{
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        tong=tong+i;
        if(tong==n)return true;
        if(tong>n)return false;
    }
    return false;
}
int n;
int main()
{
    freopen("BAI04.INP","r",stdin);
    freopen("BAI04.OUT","w",stdout);
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(sodep(i)==true)dem++;
    }
    cout<<dem;
}