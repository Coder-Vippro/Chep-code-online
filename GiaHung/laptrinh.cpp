#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("laptrinh.inp","r",stdin);
    freopen("laptrinh.out","w",stdout);
    int n,ma=100,d=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a<ma)
        {
            ma=a;
            d=1;
        }
        else if(a==ma)d++;
    }
    cout<<ma<<endl<<d;
    return 0;
}
