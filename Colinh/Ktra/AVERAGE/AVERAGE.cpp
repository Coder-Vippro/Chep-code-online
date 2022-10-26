#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
double A[100001];
int main()
{
    freopen("AVERAGE.INP","r",stdin);
    freopen("AVERAGE.OUT","w",stdout);
    cin>>n;
    double k=n;
    double tong=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]<0)
        {
            k--;
        }
        else tong=tong+A[i];
    }
    if(tong==0)
    {
        cout<<0;
        return 0;
    }
    cout<<fixed<<setprecision(2)<<tong/k;
}