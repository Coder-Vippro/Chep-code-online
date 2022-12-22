#include <iostream>

using namespace std;
int a,b,k,x,y;
int main()
{
freopen("ONTINH01.INP","r",stdin);
freopen("ONTINH01.OUT","w",stdout);
    cin>>a>>b>>k>>x>>y;
    int dem=0;
    for(int i=1;i<=k;i++)
        for(int j=1
            ;j<=k;j++)
            if(i+j==k && i*x+a==j*y+b)
                  dem++;
               cout<<dem;
    return 0;
}
