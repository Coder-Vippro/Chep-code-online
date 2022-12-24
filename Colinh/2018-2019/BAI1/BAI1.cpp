#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
long long A[5];
int main()
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    cin>>A[1]>>A[2]>>A[3];
    sort(A+1,A+4);
    cout<<A[2]+A[3]<<' '<<A[1]*A[2];
}