#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Duration.inp","r",stdin);
    freopen("Duration.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if (a<b){
        cout<<b-a;
    }
    else{cout<< 24-a+b;}
    return 0;
}
