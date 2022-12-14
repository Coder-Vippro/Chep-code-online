#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TIM_X1.inp","r",stdin);
    freopen("TIM_X1.out","w",stdout);
    long long n,x=1,s=0;
    cin>>n;
    while(s<n){
       s=s+x;
       x++;}
    cout<<x-2;
}
