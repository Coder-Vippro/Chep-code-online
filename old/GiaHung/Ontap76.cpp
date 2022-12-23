#include <iostream>

using namespace std;

bool nhuan(int n)
{
   if(n%4==0&&n%100!=0||n%400==0) return true;
   return false;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    for(int i=1900;i<=c;i++)
    {
        if(nhuan(i)==true) d=d+365;
        else d=d+366;
    }
    for(int i=1;i<=b;i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) d=d+31;
        if(i==4||i==6||i==9||i==11) d=d+30;
        if(i==2)
        {
            if(nhuan(c)==true) d=d+29;
            else d=d+28;
        }
    }
    cout<<d/7;
    return 0;
}
