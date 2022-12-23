#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("CupsAndBalls.inp","r",stdin);
    freopen("CupsAndBalls.out","w",stdout);
    int a=1,b=0,c=0,d;
    string t;
    cin >> t;
    for (int i = 0; i < t.size(); i++) {
        if(t[i]=='A'){
            d=a;a=b;b=d;
        }
        if(t[i]=='B'){
            d=b;b=c;c=d;
        }
        if(t[i]=='C'){
            d=a;a=c;c=d;
        }
    }
        if(a==1)cout<<1;
        else if(b==1)cout<<2;
        else if(c==1)cout<<3;
    return 0;
}

