#include <bits/stdc++.h>
using namespace std;
int n;
long long k;
int dem=1;
int maxx=0;
int main()
{
    //freopen("DOANCON.INP","r",stdin);
    //freopen("DOANCON.OUT","w",stdout);
    cin>>n;
    int temp;
    while(n--)
    {
        cin>>k;
        if(k>temp)
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
