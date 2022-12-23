#include <iostream>
using namespace std;

int main()
{
    int number,r,sum=0,temp;
     cin >> num;

    for(temp=number;number!=0;number=number/10)
        {
         r=num%10;
         sum=sum*10+r;
    }
    if(temp==sum)
         cout  << "yes";
    else
         cout  << "no";

    return 0;
}
