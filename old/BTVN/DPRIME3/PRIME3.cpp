#include <bits/stdc++.h>
//#define N int(1e7)
using namespace std;
int p[N+2];
long long n;
bool kn=0;
bool ktnt(long long x) //kiem tra nt kieu cu
{
    if(x<2)return false;
    if(x==2)return true;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("PRIME3.INP","r",stdin);
    freopen("PRIME3.OUT","w",stdout);
    int dem=0;
    cin>>n;
    sangngto(n);
        for(int j=1;j*j<=n-4;j++)
                if(ktnt(4+j*j)==1 && ktnt(j)==1 && 4+j*j<n )
                    { 
                        cout<<4<<' '<<j<<' '<< 4+j*j <<endl;
                        kn=1;
                    }     
    if(kn==0)cout<<-1;
    return 0;
}