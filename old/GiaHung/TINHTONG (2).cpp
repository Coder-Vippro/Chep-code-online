#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TINHTONG.INP","r",stdin);
    freopen("TINHTONG.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a;
    cin>>a;
    if(a%2==0)
    {
        cout<<-1*(a/2);
    }
    else if(a%2==1)
    {
        cout<<a+(((a-1)/2)*-1);
    }
} 