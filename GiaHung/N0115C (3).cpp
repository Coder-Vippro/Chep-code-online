#include <bits/stdc++.h>

using namespace std;

unsigned long long C(int n,int k)
{
    if(k==0||k==n)
        return 1;
    else if(k==1)
        return n;
    else return C(n-1,k-1)+C(n-1,k);
}
unsigned long long A(int n,int k)
{
    unsigned long long t=1;
    for(int i=n;i>=n-k+1;i--)t*=i;
    return t;
}
int main()
{
    //freopen("BT1.inp","r",stdin)
    //freopen("BT1.out","w",stdout)
    int n;
    cin>>n;
    cout<<C(n,3)<<" "<<A(n,2);
    return 0;
}
