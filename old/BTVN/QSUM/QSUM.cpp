/*#include <bits/stdc++.h>
using namespace std;
int A[10001];
int tong=0;
int main()
{
    
    int n;
    int k,c,d;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    while(k--)
    {
        cin>>c>>d;
        for(int i=c;i<=d;i++)
        {
            tong=tong+A[i];
        }
        cout<<tong<<endl;
        tong=0;
    }
}*/
#include <bits/stdc++.h>
using namespace std;
int a,n,k,d,c;
int tong[10001];
int main()
{
    freopen("QSUM.INP","r",stdin);
    freopen("QSUM.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        tong[i]=tong[i-1]+a;
    }
    while(k--)
    { cin>>c>>d; cout<<tong[d]-tong[c-1]<<'\n';}
}