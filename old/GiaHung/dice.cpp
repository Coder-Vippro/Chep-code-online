#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("dice.INP","r",stdin);
    freopen("dice.OUT","w",stdout);
    cin>>n;
    int k;
    while(n)
    {
        cin>>k;
        cout<<7-k;
    }
}