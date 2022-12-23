#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n) //ham ktnt
{
    if(n<2)
    return false;
    if(n==2)return true;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            dem++;
        }
    }
    if(dem==2)
    return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI60822.INP","r",stdin);
    freopen("BAI60822.OUT","w",stdout);
    int n;
    cin>>n;
    int dem=0;
    for(int i=2;i<=n;i++) //phan tich thanh tong 2snt
       for(int j=3;j<=n;j++)
       {
            if(ktnt(i)==true && ktnt(j)==true && i<j && i+j==n)
            {
                cout<<i<<' '<<j;
                return 0;
            }
            dem++;
       }
    if(dem==n) 
    {
        for(int i=2;i<=n;i++) //phan tich thanh tong 3 snt
        {
            for(int j=3;j<=n;j++)
            {
                for(int k=5;k<=n;k++)
                {
                    if(ktnt(i)==true && ktnt(j)==true && ktnt(k)==true && i<j && j<k && i+j+k==n)
                    {
                        cout<<i<<' '<<j<<' '<<k;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}