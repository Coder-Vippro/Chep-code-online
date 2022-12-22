#include<bits/stdc++.h>
#define N int (1e6)
#define ll long long
using namespace std;
int p[N+2];
ll n;
void phantich(ll,n);
{
    ll m=n;
    fill(p,p+n+1,0) //set toan bo gt trong mang p=0
    for(ll i=2;i*i<=m;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            p[i]++;
        }
    }
    for(ll i=2;i<=m;i++)
    {
        if(p[i]>0)cout<<i<<" mu "<<p[i]<<'\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}