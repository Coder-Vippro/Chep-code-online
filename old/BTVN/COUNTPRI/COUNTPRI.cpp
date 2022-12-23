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
    freopen("COUNTPRI.INP","r",stdin);
    freopen("COUNTPRI.OUT","w",stdout);
    int l,r,n;
    cin>>n;
    int dem=0;
    while(n--)
    {
        cin>>l>>r;
        sangngto(r);
        for(int i=l;i<=r;i++)
        {
            if(p[i]==1)
            dem++;
        }
        cout<<dem<<endl;
        dem=0;
    }
}