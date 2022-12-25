#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    freopen("kt02.INP","r",stdin);
    freopen("kt02.OUT","w",stdout);
    cin>>a>>b;
    if((a>=0 && b<0)||(a<0 && b>=0))
    {
        cout<<"YES";
    }
    else cout<<"NO";
}