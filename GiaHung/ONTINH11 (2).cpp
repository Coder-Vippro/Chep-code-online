#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tinh11.inp","r",stdin);
    freopen("tinh11.out","w",stdout);
    long long n,a,b;
    cin>>n>>a>>b;
    long long maxa=a,maxb=b;
    float sa=a,sb=b;
    for (int i=1;i<=n-1;i++){
            cin>>a>>b;
            if(maxa<a)maxa=a;
            if(maxb<b)maxb=b;
            sa=sa+a;sb=sb+b;
    }
    cout<<maxa<<" "<<maxb<<" ";
    cout<<fixed<<setprecision(2);
    cout<<sa/n<<" "<<sb/n;
    return 0;
}
