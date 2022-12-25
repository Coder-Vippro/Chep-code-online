#include <iostream>
#include <cstdio>
using namespace std;
int giaithua(int n)
{
    int kq=1;
    for(int i=1;i<=n;i++)
    {
        kq=kq*i;
    }
    return kq;
}
int n;
int main()
{
    freopen("Giaithua.INP","r",stdin);
    freopen("Giaithua.OUT","w",stdout);
    cin>>n;
    cout<<n<<'!'<<' '<<'='<<' '<<giaithua(n);
}