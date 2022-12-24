#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int binaryToDecimal(int binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}
int main()
{
    freopen("BAI7.INP","r",stdin);
    freopen("BAI7.OUT","w",stdout);
    int n,m;
    char c;
    cin>>n>>m>>c;
    if(c=='+')
    cout<<fixed<<setprecision(2)<<binaryToDecimal(n)+binaryToDecimal(m);
    if(c=='-')
    cout<<fixed<<setprecision(2)<<binaryToDecimal(n)-binaryToDecimal(m);
    if(c=='*')
    cout<<fixed<<setprecision(2)<<binaryToDecimal(n)*binaryToDecimal(m);
    if(c=='/')
    cout<<fixed<<setprecision(2)<<binaryToDecimal(n)/binaryToDecimal(m);
}