#include <bits/stdc++.h>

using namespace std;
long long  A[10000001],n;
int main()
{
    cin>>n;
int vitri;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int Max=A[1];
    for(int i=2;i<=n;i++)
    {
        if(Max<=A[i])
            Max=A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(Max=A[i])
            vitri=i;
    }
    cout<<vitri;
    return 0;
}
