#include <bits/stdc++.h>

using namespace std;
bool nt(long long n)
{
    if(n==2) return true;
    if(n>2)
    {
        for(long long i=2;i<=sqrt(n);i++)
        if(n%i==0) return false;
        return true;
    }
}
int main()
{
    freopen("PTTS.inp","r",stdin);
    freopen("PTTS.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,snt=2,mu=0;
    cin>>n;
    while(n>1)
    {
        if(nt(snt)==1 && n%snt==0)
        {
            while(n%snt==0)
            {
                n/=snt;
                mu++;
            }
            cout<<snt<<" "<<mu<<endl;
            mu=0;
        }
       snt++;
    }
    return 0;
}