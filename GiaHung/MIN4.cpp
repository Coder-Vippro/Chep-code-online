#include <bits/stdc++.h>
using namespace std;
int A[4];
int main()
{
    freopen("MIN4.INP","r",stdin);
    freopen("MIN4.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>A[1]>>A[2]>>A[3]>>A[4];
    sort(A,A+4+1);
    cout<<A[1];
    return 0;
}