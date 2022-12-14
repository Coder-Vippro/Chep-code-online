#include <bits/stdc++.h>
using namespace std;
long long a[100001];
int main()
{
    //freopen("TINH.inp","r",stdin);
    //freopen("TINH.out","w",stdout);
    long long n;
    cin>>n>>a[1];
    long long ma=a[1],mi=a[1],mins=10000000000,s=0;
        for(int i=2;i<=n;i++){
            cin>>a[i];
            mi=min(mi,a[i]);
            ma=min(ma,a[i]);
        }
        for(int x=0;x<=ma;x++){
            for(int i=1;i<=n;i++){
                s=s+abs(a[i]-(x+1));
            }
            mins=min(mins,s);
        }
        cout<<mins;
    return 0;
}
