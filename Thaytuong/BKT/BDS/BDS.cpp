/*#include <bits/stdc++.h>

using namespace std;
int bds(int n)
{
    int maxx=0;
    while(n>0)
    {
        maxx=max(maxx,n%10);
        n=n/10;
    }
    return maxx;
}
int main()
{
    int n,kq=0;
    cin>>n;
    while(n>0)
    {
        kq++;
        n=n-bds(n);
        if(n==0)
        {
            cout<<kq;
            return 0;
        }
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int f[100001];
int Min,x;
int main()
{
    int n;
    cin>>n;
    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        Min=1e6;
        x=i;
        while(x>0)
        {
            Min=min(Min,f[i-x%10]);
            x=x/10;
        }
        f[i]=Min+1;
    }
    cout<<f[n];
}
