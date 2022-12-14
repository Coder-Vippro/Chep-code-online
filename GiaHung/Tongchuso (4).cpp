#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Tongchuso.inp","r",stdin);
    freopen("Tongchuso.out","w",stdout);
    int a,b,d=0;
    cin>>a>>b;
    while(a>0&&b>0){
        d=d+a%10+b%10;
        a=a/10;
        b=b/10;
    }
    cout<<d;
    return 0;
}
