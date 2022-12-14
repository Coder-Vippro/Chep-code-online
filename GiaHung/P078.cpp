#include <iostream>
using namespace std;
bool ktmm(int n)
{
    int k=n;
    int dem=0;
    while(k>0)
    {
        dem=dem+k%10;
        k=k/10;
    }
    if(n%dem==0)
    return true;
    else return false;
}
int A[1000001];
int main()
{
    int n;
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(ktmm(A[i])==true)
           dem++;
    }
    cout<<dem;
    return 0;
}