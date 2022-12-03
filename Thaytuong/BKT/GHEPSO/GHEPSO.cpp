#include <bits/stdc++.h>
using namespace std;
int A[4];
int main()
{
    freopen("GHEPSO.INP","r",stdin);
    freopne("GHEPSO.OUT","w",stdout);
    cin>>A[1]>>A[2]>>A[3];
    sort(A+1,A+4);
    cout<<A[3]<<A[2]<<A[1];
}