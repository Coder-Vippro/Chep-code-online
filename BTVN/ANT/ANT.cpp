#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int a,b;
    char c,d;
    cin>>a>>c;
    cin>>b>>d;
    char temp;
    int temp1;
    if(a>b)
    {
        temp1=a;
        a=b;
        b=temp1;
        temp=c;
        c=d;
        d=temp;
    }
    if(c=='L' && d=='L')
    cout<<b;
    else if(c=='L'&& d=='R')
    {cout<<max(a,n-b);}
    else if(c=='R'&& d=='L')
    {cout<<max(b,n-a);}
    else if(c=='R'&& d=='R')
    {cout<<n-a;}
    return 0;
}