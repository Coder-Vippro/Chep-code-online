#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TIM_X2.inp","r",stdin);
    freopen("TIM_X2.out","w",stdout);
    long long n,x=2,s=0;
    cin>>n;
    while(s<n){
       s=s+x;
       x=x+2;}
    cout<<x-4;

}
