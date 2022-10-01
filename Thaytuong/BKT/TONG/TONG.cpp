#include <iostream>

using namespace std;
bool kt(int a, int minn, int maxx)
{
    int tong=0;
    while(a>0)
    {
        tong=tong+a%10;
        a=a/10;
    }
    if(tong>=minn && tong <=maxx)
        return true;
    return false;
}
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    int kq=0;
    for(int i=1;i<=a;i++)
    {
        if(kt(i,b,c)==true)
            kq=kq+i;
    }
    cout<<kq;
    return 0;
}
