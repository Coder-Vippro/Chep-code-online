#include <bits/stdc++.h>

using namespace std;
int n,k;
int main()
{
    //freopen("YEN.INP","r",stdin);
    //freopen("YEN.OUT","w",stdout);
    cin>>n>>k;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if((k-i*5-j*3)%1==0 && (k-i*5-j*1)/3+i+j==n && (k-i*5-j*1)/3>=0 && i>=0 && k>=0)
            {
                cout<<i+(k-i*5-j*1)/3+j;
                return 0;
            }
        }
    }
    cout<<"NO SOLUTION";
    return 0;
}
