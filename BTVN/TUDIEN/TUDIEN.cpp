#include <bits/stdc++.h>
using namespace std;
char a,b;
int main()
{
    freopen("TUDIEN.INP","r",stdin);
    freopen("TUDIEN.OUT","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>='A' && a<='B')a=a+32;
        if(b>='A' && b<='B')b=b+32;
        if(a<b)
        cout<<(a-97)*25+(b-97);
        else cout<<(a-97)*25+(b-97)+1;
        cout<<'\n'; 
    }
    
}