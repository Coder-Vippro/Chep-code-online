#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    if(n<2)
    return false;
    if(n==2)
    return true;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        dem++;
    }
    if(dem==2)
    return true;
    else return false;
}
long long n;

int main()
{
    freopen("BAI60622.INP","r",stdin);
    freopen("BAI60622.OUT","w",stdout);
    cin>>n;
    long long k=n;
    while(n>1)
    {
      for(int i=2;i<=k;i++)
      {
        if(ktnt(i)==true)
        {
            while(n%i==0)
            {
                n=n/i;
                cout<<i<<' ';
            }
        }
        if(n==1)
        return 0;
      } 
    }

}