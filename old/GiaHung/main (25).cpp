#include <iostream>

using namespace std;
int souoc(int n)
{
    int d=0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
    {
        d=d+2;
        if(n==i*i) d--;
    }
    return d;
}
bool ktnt(int k)
{
    if(k<2) return false;
    for(int i=2;i*i<=k;i++)
        if(k%i==0)
        return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(ktnt(souoc(n)))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
