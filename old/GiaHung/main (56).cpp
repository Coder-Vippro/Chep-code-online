#include <iostream>

using namespace std;
int a[100001],n,k,b;
long long t=0;
int main()
{
    cin>>n>>k>>b;
    for(int i=1;i<=k;i++) cin>>a[i];
    if(b!=n)
        for(int i=1;i<=k;i++)
    {
        t+=a[b];
        b++;
        if(b>n) b=b%n;
    }
    cout<<t;

    return 0;
}
