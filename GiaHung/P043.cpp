#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<<((a+b)*(a-b))/((a*b)*(a/b));
    return 0;
}