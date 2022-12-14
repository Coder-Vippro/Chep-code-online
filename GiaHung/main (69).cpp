#include <iostream>

using namespace std;
int n,A[1000];
int B[10001];
int main()
{
    freopen("DAYSO.INP","r",stdin);
    freopen("DAYSO.OUT","w",stdout);
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++)
    {
        A[i]=i;
    }
for(int i=1;i<n;i++)
{
    B[i]=i+1;

}
for(int i=1;i<=n;i++)
s=s+A[i]*B[i];
cout<<s;
    return 0;
}
