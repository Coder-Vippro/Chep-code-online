#include <iostream>
using namespace std;
bool ktnt(int n)
{
   if(n==2)
   return true;
   if(n<2)
   return false;
   int dem=0;
   for(int i=1;i<=n;i++)
   {
       if(n%i==0)
       dem++;
   } 
   if(dem==2)
   return true;
   else return false;
}
int A[10001];
int main()
{
    int n;
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(ktnt(A[i])==true)
        dem++;
    }
    cout<<dem;
}