#include <bits/stdc++.h>

using namespace std;
long long A[1000001];
int main()
{
//freopen("TUOI_NUOC.INP","r",stdin);
//freopen("TUOI_NUOC.OUT","w",stdout);
    long long n,a,B;
    cin>>n>>a>>B;
    double tong=0;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        tong=tong+A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a*A[1]/tong>=B)
        {
            cout<<dem;
            return 0;
        }
        else
        {
            dem++;
            tong=tong-A[i+1];
        }

    }
    return 0;
}
