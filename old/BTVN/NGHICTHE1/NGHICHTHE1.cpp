#include <bits/stdc++.h>
using namespace std;
long long A[10001];
long long dem=0;
int n;
int main()
{
    freopen("nghichthe1.inp","r",stdin);
    freopen("nghichthe1.out","w",stdout);    
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>A[i];
    for(int i=1;i<=n;i++)
    {
            for(int j=i;j>=1;j--)
            {
                if(A[i]<A[j])
                dem++;
            }
        cout<<dem<<' ';
        dem=0;
    }
}