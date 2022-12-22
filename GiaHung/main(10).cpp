//bai 8 NguyenNgocLinh
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ta=0,tb=0;
    cin>>a>>b;

    for(int i=1;i<a;i++){
        if(a%i==0)ta=ta+i;
    }
    for(int k=1;k<b;k++){
        if(b%k==0)tb=tb+k;
    }
    if(ta==b && tb==a)cout<<"YES";
        else cout<<"NO";
}
