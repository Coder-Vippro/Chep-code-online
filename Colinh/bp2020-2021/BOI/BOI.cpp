#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,m;
int main()
{
    freopen("BOI.INP","r",stdin);
    freopen("BOI.OUT","w",stdout);
    cin>>n;
    if(n%2==0 && n%5==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}