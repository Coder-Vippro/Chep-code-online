#include <bits/stdc++.h>
using namespace std;
bool ktnt(int x) //kiem tra nt kieu cu
{
    if(x<2)return false;
    if(x==2)return true;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(ktnt(i)==true)
        cout<<i<<' ';
    }
}