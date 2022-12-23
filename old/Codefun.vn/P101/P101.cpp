#include <bits/stdc++.h>
using namespace std;
bool kts(int n)
{
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        if(tong<n)
        tong=tong+i;
        if(tong>n)
        return false;
        if(tong==n)return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(kts(n)==true)
    cout<<"YES";
    else cout<<"NO";
}