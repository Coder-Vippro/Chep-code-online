#include <bits/stdc++.h>

using namespace std;
long long A[1000001];
int main()
{
    freopen("TIMKIEM1.INP","r",stdin);
    freopen("TIMKIEM1.OUT","w",stdout);
    long long n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>A[i];
    int a=-1,b=-1;
    for(int i=1;i<=n;i++){
        if(A[i]==x && a==-1)a=i;
        if(A[i]==x) b=i;
    }
    if(a==-1)cout<<-1;
    else if(a==b)cout<<a;
    else cout<<a<<" "<<b;
    return 0;
}
