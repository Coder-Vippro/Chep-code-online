#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Schedule.INP","r",stdin);
    freopen("Schedule.OUT","w",stdout);
    int t;
    cin>>t;
    int n,x;
    int kq;
    while(t)
    {
        cin>>n>>x;
        kq=x+10*(n-1)-x*n;
        if(kq<0)kq=0;
        cout<<kq<<endl;
        t--;
    }
}