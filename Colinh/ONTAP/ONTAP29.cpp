#include <bits/stdc++.h>

using namespace std;
int tcs(int a)
{
    int dem=1;
    while(a>=10)
    {
        a/=10;
        dem++;
    }
    return dem;
}
int tong(int b)
{
    int tong=0;
    int so;
    so=b;
    while(so!=0)
    {
        tong+=so%10;
        so=so/10;
    }
    return tong;
}
int main()
{
    int n;
    cin>>n;
    cout<<tcs(n)<<" "<<tong(n);
    return 0;
}
