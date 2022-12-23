#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("CHIAHET.INP", "r", stdin);
    //freopen("CHIAHET.OUT", "w", stdout);
    long long a,b;
    long long c;
    cin>>a>>b>>c;
    long long dem=(b-a)+1/1;
    for(long long i=a;i<=b;i++)
    {
        if(i%c!=0)
        dem--;
    }
    cout<<dem;
}