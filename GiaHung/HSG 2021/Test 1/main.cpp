#include <bits/stdc++.h>


using namespace std;
long long n;
int a[10000001];
int b[10000001];

int main()
{
cin>>n;
for(int i=1;i<=n/2;i++)
{
    cin>>a[i];
}
    for(int i=1;i<=n/2;i++)
    cin>>b[i];
sort (a+1,a+n/2+1);
sort (b+1,b+n/2+1);
for(int i=1;i<=n/2;i++)
{
    cout<<a[i]<<' ';
}
for(int i=n/2;i>=1;i--)
{
    cout<<b[i]<<' ';
}
    return 0;
}
