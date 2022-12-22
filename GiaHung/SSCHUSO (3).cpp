#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SSCHUSO.inp","r",stdin);
    freopen("SSCHUSO.out","w",stdout);
    int a;
    cin>>a;
    if(a/10<a%10) cout<<"Hang don vi lon hon";
    else  if(a/10>a%10) cout<<"Hang chuc lon hon";
    else cout<<"Bang nhau";
    return 0;
}
