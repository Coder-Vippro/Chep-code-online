#include <bits/stdc++.h>

using namespace std;

int main()
{
   freopen ("INSON.inp","r",stdin);
    freopen ("INSON.out","w",stdout);
    int a;
    cin>>a;
    if(a<100){
    for(int i=1;i<=a*3;i++) cout<<i<<" ";
    }
    else{for(int i=a;i<=a+5;i++) cout<<i<<" ";}
    return 0;
}
