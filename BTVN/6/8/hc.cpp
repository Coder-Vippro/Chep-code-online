#include <bits/stdc++.h>
using namespace std;
/*bool kt(int n)
{
    int k=sqrt(n);
    if(k*k==n)return true;
    return false;
}*/
int main()
{
    int n;
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(i%7==0 && i%2!=0 && i%5!=0)
        dem++;
    }
    cout<<dem;
}