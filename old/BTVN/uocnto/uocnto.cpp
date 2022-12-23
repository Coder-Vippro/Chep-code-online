#include <bits/stdc++.h>
#define N int(1e7)
using namespace std;
int p[N+2];
void sangngto (int n) //sang nguyen to
{
    fill(p,p+n+1,1); //phu toan bo mang p voi gia tri 1
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
int main()
{
    freopen("uocnto.INP","r",stdin);
    freopen("uocnto.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b;
    int n;
    cin>>n;
    int dem=0;
    int dem1=0;
    while(n--)
    {
        cin>>a>>b;
        sangngto(b);
        for(int i=a;i<=b;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                dem++;
            }
            if(p[dem]==1)
            dem1++;
            dem=0;
        }
        cout<<dem1<<endl;
        dem1=0;
    }
}