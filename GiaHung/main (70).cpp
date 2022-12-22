#include <iostream>

using namespace std;
long long a,b,x;
int main()
{
cin>>a>>b>>x;
int dem =0;
for(int i=a;i<=b;i++)
{
    if(i%x==0)
        dem++;
}
cout<<dem;
    return 0;
}
