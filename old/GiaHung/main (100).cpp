#include <bits/stdc++.h>

using namespace std;
float a,b;
int main()
{
    cin>>a>>b;
    if(a>b)
    cout<<fixed<<setprecision(2)<<a-b;
    else cout<<fixed<<setprecision(2)<<a/b;
    return 0;
}
