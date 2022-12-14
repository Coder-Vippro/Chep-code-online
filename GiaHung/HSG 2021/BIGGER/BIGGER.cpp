#include <iostream>

using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    int dem=1;
   while(a<b)
   {
       a=a*3;
       b=b*2;
       if(a<b)
        dem++;
   }
   cout<<dem;
    return 0;
}
