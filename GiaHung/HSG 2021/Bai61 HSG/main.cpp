#include <bits/stdc++.h>

using namespace std;
int n,A[10000001];
int main()
{
    freopen("ontap60.inp", "r", stdin);
    freopen("ontap60.out", "w", stdout);
    cin>>n;
    for (int i=1; i<=n;i++ )
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        int d=0;
        for(int j=1;j<=n;j++)
            if(A[i]==A[j]) d++;
        if(d==1){cout<<A[i]; return 0;}
    }

    return 0;
}
