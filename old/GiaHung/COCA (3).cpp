#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("COCA.INP", "r", stdin);
    freopen("COCA.OUT", "w", stdout);
    int a,b,c;
    cin>>a>>b>>c;
     int n=a+b;
   int d=0;
    while(n>=c){
        d=d+n/c;
        n=n/c+n%c;
    }
    cout<<d;
    return 0;
}
