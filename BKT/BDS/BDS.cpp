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
int f[1000001];
int main()
{
    int n;
    cin>>n;
    f[0]=0;f[1]=1;f[2]=1;f[3]=1;f[4]=1;f[5]=1;f[6]=1;f[7]=1;f[8]=1;f[9]=1;
    for(int i=10;i<=n;i++)
    {
        f[i]=1e6;
        int x=i;
        while(x>0)
        {
            f[i]=min(f[i],f[i-x%10]);
            x=x/10;
        }
        f[i]=f[i]+1;
    }
    cout<<f[n];
}
