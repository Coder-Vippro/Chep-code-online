#include <iostream>

using namespace std;
long long t,d,c;
long long f (long long cs)
   {
       if(cs/2==0) return cs/2; else return -(cs+1)/2;
   }
   int main()
{

cin>>t;
for  (long long i=1;i<=t;i++)
{
    cin>>d>>c;
    cout<<f(c)-f(d-1)<<endl;
}

    return 0;
}
