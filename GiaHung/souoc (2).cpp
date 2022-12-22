#include <iostream>

using namespace std;

int main()
{
    freopen("souoc.inp","r",stdin);
    freopen("souoc.out","w",stdout);
    int a,s=0;
    cin>>a;
    for(int i=1;i<=a;i++)
        if(a%i==0) s++;
    cout<<s;
    return 0;
}
