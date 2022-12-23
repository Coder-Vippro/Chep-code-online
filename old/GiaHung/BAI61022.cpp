#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAI61022.INP","r",stdin);
    freopen("BAI61022.OUT","w",stdout);
    string s="";
    int n;
    cin>>n;
    while(n>0){
        s=char((n%2)+48)+s;
        n=n/2;
    }
    cout<<s;
    return 0;
}
