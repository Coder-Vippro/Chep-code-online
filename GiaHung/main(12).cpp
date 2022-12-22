//bai 6 NguyenNgocLinh
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    a=n/100;
    c=n%10;
    b=n%100/10;
    if(a*a*a+b*b*b+c*c*c==n)cout<<"YES";
    else cout<<"NO";
}
