#include <bits/stdc++.h>
using namespace std;
int A[5];
int main()
{
    freopen("GHEPSO.INP","r",stdin);
    freopen("GHEPSO.OUT","w",stdout);
    for(int i=1;i<=3;i++) 
    {
        cin>>A[i];
    }
    sort(A+1,A+3+1);
    cout<<A[3]*100+A[2]*10+A[1];
}