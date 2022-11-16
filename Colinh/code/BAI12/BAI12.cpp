#include <bits/stdc++.h>
using namespace std;
int a[10001];
int n;
int maxx=-1e9;
int kq;
int x;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(maxx<=a[i])
        {maxx=a[i];kq=i;}
    }
    cout<<kq;
    

}