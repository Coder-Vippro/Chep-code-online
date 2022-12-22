#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TINH01.inp","r",stdin);
    freopen("TINH01.out","w",stdout);
    string a="";
    int n;cin>>n;
    for(int i=10;i<+99;i++) {
                    a=a+char(i/10+48);
                    a=a+char(i%10+48);
    }
    cout<<a[n-1];
    return 0;
}
