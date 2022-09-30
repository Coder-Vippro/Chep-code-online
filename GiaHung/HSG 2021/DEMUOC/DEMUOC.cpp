#include <bits/stdc++.h>

using namespace std;
bool dem(long long n)
{
    int h=sqrt(n);
    if(sqrt(n)==h)
        return false;
    else return true;
}
int n;
long long A[100001];
int main()
{
    freopen("DEMUOC.INP","r",stdin);
    freopen("DEMUOC.OUT","w",stdout);
    cin>>n;
    int dem1=0;
    int dem2=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(dem(A[i])==true)
            dem1++;
        else dem2++;
    }
    cout<<dem1<<'\n';
    cout<<dem2<<'\n';
    return 0;
}
