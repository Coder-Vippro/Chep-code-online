#include <bits/stdc++.h>
using namespace std;
bool tcs(long long n)
{
    long long tong=1;
    long long k=n;
    while(n>0)
    {
        if(n%10==0)
        return false;
        tong=tong*(n%10);
        n=n/10;
    }
    if(k%tong==0)
    return true;
    return false;
}
int main()
{

    //freopen("PRODUCT.INP", "r", stdin);
    //freopen("PRODUCT.OUT", "w", stdout);
    long long a,b;
    cin>>a>>b;
    long long dem=0;
    for(long long i=a;i<=b;i++)
    {
        if(tcs(i)==true)
        dem++;
    }
    cout<<dem;

}