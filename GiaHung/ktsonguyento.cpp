#include <bits/stdc++.h>

using namespace std;
bool ktnt(int n)
{
    if(n<2)
        return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
    return true;
}
int main()
{
    int a;
    cin>>a;
    if(ktnt(a))
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
