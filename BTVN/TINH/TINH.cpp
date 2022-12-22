#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("TINH.INP","r",stdin);
    //freopen("TINH.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    if(b==0)cout<<-1<<endl;
    else cout<<a/b<<endl;
    if(b==0)cout<<-1;
    else cout<<a%b; 
    return 0;
}