#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("TINHDK.inp","r",stdin);
    freopen ("TINHDK.out","w",stdout);
    int a ,tl=0;
    cin>>a;
    if(a%2==0){
    for(int i=0;i<=a;i++){
        if(i%2==0)cout<<i<<" ";
    }
    }
    else{
         for(int i=0;i<=a;i++){
        if(i%2!=0) tl=tl+i;
    }
    cout<<tl;
    }
    return 0;
}
