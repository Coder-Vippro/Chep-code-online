#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DOMINO.INP","r",stdin);
    freopen("DOMINO.OUT","w",stdout);
    int n;
    cin>>n;
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        tong=tong+3*i*(i+1)/2;
    }
    cout<<tong;
}