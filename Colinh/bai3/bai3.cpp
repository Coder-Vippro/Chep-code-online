#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int n,x;
int A[N+2];
int maxx=-1e9;
int minn=1e9+1;
int vtminn=1;
int vtmaxx=1;
long long dem=0;
long long tich=1;
long long demle=0;
int dem3=0;
bool hoanhao(int n){int tong=0;for(int i=1;i<=n;i++){if(n%i==0){tong=tong+i;}if(tong==n)return true;else return false;}return false;}
int main()
{
    //freopen("bai1.inp", "r", stdin);
    //freopen("bai1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        if(A[i]>maxx)
        {
            vtmaxx=i;
        }
        else if(A[i]<minn)
        {
            vtminn=i;
        }
        if(A[i]==x)
        {
            dem3++;
        }
    }
    cout<<dem3<<'\n';
    for(int i=1;i<=n;i++)
    {
        if(A[i]%2==0 && i%2==1)
        {
            cout<<A[i]<<' ';
        }
        if(hoanhao(A[i])==true)
        {
            dem++;
        }
    }
    cout<<'\n';
    
    for(int i=vtminn;i<=vtmaxx;i++)
    {
        tich=tich*A[i];
    }
    cout<<dem<<'\n';
    cout<<tich;
    

}