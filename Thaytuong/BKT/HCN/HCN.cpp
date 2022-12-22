#include <bits/stdc++.h>

using namespace std;
pair <long long,long long> a[55];
int main()
{
    long long n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
    sort(a+1,a+n+1);
    long long x1,x2,y1,y2,minn=4e18;
    for(int i=1;i<=n-k+1;i++)
    {
        x1=a[i].first,x2=a[i+k-1].first,y1=1e18,y2=-1e18;
        for(int j=i;j<=i+k-1;j++)
        {
            y1=min(y1,a[j].second);
            y2=max(y2,a[j].second);
        }
        minn=min(minn,((x2-x1)*(y2-y1)));
    }
    cout<<minn;
    return 0;
}
