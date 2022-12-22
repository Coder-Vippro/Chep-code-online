#include <bits/stdc++.h>
using namespace std;
int A[3];
int main()
{
    cin>>A[1]>>A[2]>>A[3];
    sort(A,A+3+1);
    cout<<A[1]<<' '<<A[3];
}