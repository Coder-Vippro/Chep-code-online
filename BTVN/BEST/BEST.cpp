#include <bits/stdc++.h>
#define ll long long
using namespace std;
int A[10001],B[10001];
int main()
{
    ll a,b;
    ll dem1=0;
    ll dem2=0;
    for(int i=1;i<=a;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=b;i++)cin>>B[i];
    sort(A,A+a+1);
    sort(B,B+a+1);
    if(a>b)ll n=a;
    else ll n=b;
    for(int i=1;i<=n;i++)
    {
        if(A[i]!=B[i])
        dem1++;
        if(A[i]==B[i])dem2++;
    }
    cout<<dem1<<' '<<dem2;
}