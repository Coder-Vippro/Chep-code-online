#include <bits/stdc++.h>
using namespace std;
bool tcs(int n)
{
    int tong=1;
    int k=n;
    while(n>0)
    {
        tong=tong*(n%10);
        n=n/10;
    }
    if(k%tong==0)
    {
        return true;
    }
    else return false;
}
int main()
{
    
    freopen("PRODUCT.INP", "r", stdin);
    freopen("PRODUCT.OUT", "w", stdout);
    int a,b;
    cin>>a>>b;
    int dem=0;
    for(int i=a;i<=b;i++)
    {
        if(tcs(i)==true)
        dem++;
    }
    cout<<dem;
    
}

// Hung fix ho bai nay vs :))