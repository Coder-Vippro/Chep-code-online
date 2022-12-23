#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,n;
cin>>n;
while(n--)
{
    cin>>a>>b>>c;
    int k=a;
    int m=b;
    while(c--)
    {
        k=k*2;
        m=m*2;
    }
    m=m/2;
    if(k>m)
    {
        cout<<k/m<<endl;
    }
    else cout<<m/k<<endl;
    
}
}