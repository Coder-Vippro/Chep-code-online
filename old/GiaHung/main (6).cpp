#include <bits/stdc++.h>

using namespace std;
bool Numberprime(int x)
{
    if(x<2)
        return false;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        return false;
    return true;
}
int n;
int total=0;
int main()
{
   cin>>n;
   for(int i=2;i<=n;i++)
   if(Numberprime(i))
   {
       total+=i;
   }
   cout<<total<<'\n';
   if(Numberprime(total))
    cout<<"YES";
   else cout<<"NO";
    return 0;
}
