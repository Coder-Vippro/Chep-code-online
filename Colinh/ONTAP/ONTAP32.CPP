#include <bits/stdc++.h>

using namespace std;
bool nto(int a)
{
    if(a<2)
        return false;
    for(int i=1;i*i<=a;i++)
        if(a%i==0) return false;
    return true;
}
int tong(int b)
{
    int so,tong1=0;
    so=b;
    while(so!=0)
    {
        tong1+=so%10;
        so=so/10;
    }
    return tong1;
}
int main()
{
    int n;
    cin>>n;
    int b=tong(n);
    cout<<b<<'\n';
    if(nto(n))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
