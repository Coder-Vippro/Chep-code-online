#include <bits/stdc++.h>
using namespace std;
bool kthcn(int a, int b, int c, int d)
{
    if(a==c ||a==d)
    return true;
    if(b==c || b==d)
    return true;
    return false;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(kthcn(a,b,c,d)==true)
    cout<<1;
    else cout<<0;
}