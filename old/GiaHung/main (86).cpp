#include <bits/stdc++.h>

using namespace std;
int a;

int main()
{
    int dem=0;
    cin>>a;

for(int i=1; i<=a;i++)
{
    if(a%i==0)
        dem++;
}
if(dem==2)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

if(a==sqrt(a)*sqrt(a))
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}




    return 0;
}
