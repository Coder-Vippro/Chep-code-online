#include <bits/stdc++.h>
using namespace std;
int A[5];
int main()
{
    freopen("ONTAP1.INP","r",stdin);
    freopen("ONTAP2.OUT","w",stdout);
    cin>>A[1]>>A[2]>>A[3];
    sort(A+1,A+4);
    cout<<A[2]+A[3]<<'\n';
    if(A[1]+A[2]==A[3] || abs(A[1]-A[2])==A[3])
    {
        cout<<"YES"<<'\n';
    }
    else if(A[2]+A[3]==A[1] || abs(A[2]-A[3])==A[1])
    {
        cout<<"YES"<<'\n';
    }
    else if(A[1]+A[3]==A[2] || abs(A[1]-A[3])==A[2])
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
}