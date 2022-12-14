#include <bits/stdc++.h>
using namespace std;
long long n;
long long tong=0;
int main()
{
    //freopen("TONG.INP","r",stdin);
    //freopen("TONG.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        tong=tong+i*(i+1);
    }
    cout<<tong;
}