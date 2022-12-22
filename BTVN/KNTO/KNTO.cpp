#include <bits/stdc++.h>
using namespace std;
long long n;
long long dem1=0;
long long dem2=0;
long long tong=1;
bool ktnt(long long x)
{
    if(x<2)return false;
    if(x==2)return true;
    for(long long i=2;i*i<=x;i++)
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
    freopen("KNTO.INP","r",stdin);
    freopen("KNTO.OUT","w",stdout);
    cin>>n;
    long long k=n;
    for(long long i=2;i<=n;i++)
    {
        if(ktnt(i)==true && k%i==0)
        { 
            while(k%i==0)
            {
                dem1++;
                k=k/i;
            }
            dem2++;
            tong=(dem1+1)*tong;
            dem1=0;
        }
    }
    cout<<tong-dem2;
    
    

}