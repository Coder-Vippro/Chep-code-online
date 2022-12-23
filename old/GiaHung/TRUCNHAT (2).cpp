#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TRUCNHAT.inp","r",stdin);
    freopen("TRUCNHAT.out","w",stdout);
    int a,b,n=1;
    cin>>a>>b;
    while (n%a!=0 or n%b!=0) n++;
    cout<<n<<endl<<"An:"<<n/a<<endl<<"Bach:"<<n/b;
    return 0;
}
