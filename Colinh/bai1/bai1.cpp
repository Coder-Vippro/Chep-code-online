#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
int A[N+2];
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
    //freopen("bai1.inp", "r", stdin);
    //freopen("bai1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    sangngto(200000);
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i]-A[j]==2 && p[A[i]]==1 && p[A[j]]==1)
            {
                dem++;
            }
        }
    }
    if(n!=0)
    cout<<dem;
    else cout<<"khong co cap so nao";

}