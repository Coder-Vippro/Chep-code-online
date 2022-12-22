#include <bits/stdc++.h>
using namespace std;
long long n;
long long k;
long long dem=1;
long long maxx=0;
int main()
{
    freopen("DOANCON2.INP","r",stdin);
    freopen("DOANCON2.OUT","w",stdout);
    cin>>n;
    long long temp;
    while(n--)
    {
        cin>>k;
        if((k>=0 && temp<0)||(k<0 && temp>=0))
        dem++;
        else 
        {
            if(maxx<dem)
            maxx=dem;
            dem=1;
        }
        temp=k;
    }
    cout<<maxx;
}