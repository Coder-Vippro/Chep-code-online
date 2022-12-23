#include <bits/stdc++.h>

using namespace std;
bool ktnt(int k)
{
    if(k<2)
        return false;
    for(int i=2;i*i<=k;i++)
        if(k%i==0)
        return false;
    return true;
}
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    if(ktnt(i))
    {
        s=s+i;
    }
    cout<<s;
    return 0;
}
