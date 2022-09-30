
#include <iostream>

using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
int dem=0;
   for(int i=a; i<=b ; i++)
   {
      if(i%3==0)
      {
          dem++;
      }
   }
   cout<<dem;
    return 0;
}
