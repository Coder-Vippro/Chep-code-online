#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
int A[100001];
long long n;
long long k;
int main()
{
    freopen("BAI6.INP","r",stdin);
    freopen("BAI6.OUT","w",stdout);
    cin>>n>>k;
    int maxx=-1e9;
    int vtmaxx;
    for(long long i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]>maxx)
        {
            maxx=A[i];
            vtmaxx=i;
        }
    }
    cout<<maxx<<' '<<vtmaxx<<'\n'<<A[k];

}