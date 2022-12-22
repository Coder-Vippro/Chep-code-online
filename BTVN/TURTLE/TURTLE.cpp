#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,d,i,k;
    cin>>a>>b>>c>>d;
    k=max(max(a,b),max(c,d));
    i=min(min(a,b),min(c,d));
    if(k==a) cout<<max(b,max(c,d))*i;
    else if(k==b) cout<<max(a,max(c,d))*i;
    else if(k==c) cout<<max(a,max(b,d))*i;
    else cout<<max(a,max(c,b))*i;
    return 0;
}
