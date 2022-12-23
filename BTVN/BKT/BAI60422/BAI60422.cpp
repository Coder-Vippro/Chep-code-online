#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BAI60422.INP","r",stdin);
    freopen("BAI60422.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    int s=0;
    int d=0;
    while(s<=n)
    {
        d++;
        s=s+d;
    }
    cout<<d-2;
    return 0;
}