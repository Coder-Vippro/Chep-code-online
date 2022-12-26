#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n;
int kq;
int A[100001];
int k=0;
int maxx=-1e9;
int main()
{
    freopen("MAXGIF.INP","r",stdin);
    freopen("MAXGIF.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(k<2)
        {
            kq=kq+A[i];
            k++;
        }
        if(k==2)
        {
            if(kq>maxx)
            {
                maxx=kq;
                k=0;
                kq=0;
            }
        }
    }
    cout<<maxx;
}
//duyet 2 vaong lap va xet 2 phan tu lien tiep de tim phan tu lon nhat