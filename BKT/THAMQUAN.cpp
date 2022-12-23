#include <bits/stdc++.h>
using namespace std;
int n,a[100005],s;
int main()
{

    cin>>n>>a[1];s=abs(a[1]);
    for(int i=2;i<=n;i++){cin>>a[i];s=s+abs(a[i-1]-a[i]);}
    s=s+abs(a[n]);
    cout<<s-abs(a[1])-abs(a[1]-a[2])+abs(a[2])<<'\n';
    for(int i=2;i<n;i++)
            cout<<s-abs(a[i]-a[i-1])-abs(a[i]-a[i+1])+abs(a[i-1]-a[i+1])<<'\n';
             cout<<s-abs(a[n])-abs(a[n]-a[n-1])+abs(a[n-1]);
    return 0;
}
