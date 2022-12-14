#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("MAY_TINH.inp","r",stdin);
    freopen("MAY_TINH.out","w",stdout);
    float a,b;
    char c;
    cin>>a>>c>>b;
    cout << fixed << setprecision(2);
   if(c=='+')cout<<a+b;
   if(c=='-')cout<<a-b;
   if(c=='/'){
        if(b!=0)cout<<a/b;else cout<<"Math Error";
   }
   if(c=='*')cout<<a*b;
    return 0;
}
