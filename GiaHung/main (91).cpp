#include <iostream>

using namespace std;
long long a,b,c;
int main()
{
    freopen("ontap65.inp","r", stdin);
    freopen("ontap65.out","w", stdout);
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && c+b>a)
    {
        cout<<a<<" "<<b<<" "<<c<<" "<<"la 1 canh cua tam giac";
    }
    else
    {
        cout<<"khong la 1 canh cua tam giac";
    }
    return 0;
}
