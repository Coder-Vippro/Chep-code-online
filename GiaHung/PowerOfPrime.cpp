#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PowerOfPrime.INP","r",stdin);
    freopen("PowerOfPrime.OUT","w",stdout);
    long long m,k,n;
    cin>>m;
    int dem=0;
    long long h;
    while(m--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            if(i%k==0 && i>=k)
            {
                h=i;
                while(h%k==0)
                {
                    h=h/k;
                    dem++;
                }
            }
        }
        cout<<dem<<endl;
        dem=0;
    }
   

}

