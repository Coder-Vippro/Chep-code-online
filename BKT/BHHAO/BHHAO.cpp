#include <bits/stdc++.h>

using namespace std;
bool kt1(int n)
{
    int tong=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            tong=tong+i;
    }
    if(tong==n)
        return true;
    else return false;
    return false;
}
bool ktshh(int k)
{
    int tong=0;
    while(k>0)
    {
        tong=tong+k%10;
        k=k/10;
    }
    if(kt1(tong)==true)
    return true;
    return false;

}
int n,k;
int dem=0;
int main()
{
    freopen("BHHAO.INP","r",stdin);
    freopen("BHHAO.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>k;
        {
           if(ktshh(k)==true)
                dem++;
        }
    }
    cout<<dem;
    return 0;
}
