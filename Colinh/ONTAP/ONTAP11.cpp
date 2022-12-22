#include <bits/stdc++.h>
using namespace std;
int A[4];
int main()
{
    freopen("ONTAP11.INP","r",stdout);
    freopen("ONTAP11.OUT","w",stdout)
    cin>>A[1]>>A[2]>>A[3];
    sort(A+1,A+4);
    cout<<A[2]+A[3]<<'\n';
    cout<<A[1]*A[2]<<'\n';
}