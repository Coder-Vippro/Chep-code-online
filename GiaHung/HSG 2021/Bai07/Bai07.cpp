#include <iostream>

using namespace std;
bool ktnt(int n)
{
    int dem=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
        dem++;
    if(dem==2)
        return true;
    else return false;
}
int tcs(int n)
{
    int d=0;
    while (n>0)
    {
        d=d+n%10;
        n=n/10;
    }

return d;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int so=1;
    for(int i=1;i<=n;i++) so=so*10;
    for(int i=so;i>so/10-1;i--)
        if(ktnt(i)==true&&tcs(i)==k)
           {
            cout<<i;
            return 0;
           }
    return 0;
}
