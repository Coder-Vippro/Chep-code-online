#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    freopen("TTLA.INP","r",stdin);
    freopen("TTLA.OUT","w",stdout);
    cin>>n;
    cout<<n<<' ';
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else {n=n*3+1;}
        cout<<n<<' ';
    }
    return 0;

}