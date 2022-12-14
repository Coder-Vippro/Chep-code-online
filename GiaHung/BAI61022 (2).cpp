#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("BAI61022.INP","r",stdin);
    freopen("BAI61022.OUT","w",stdout);
    int n;
    cin>>n;
    int h=0;
    while(n>0)
    {
        s[h]=n%2+48;
        n=n/2;
        h++;
    }
    for(int i=h-1;i>=0;i--)
    {
        cout<<s[i];
    }
    return 0;

}