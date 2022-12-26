#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
string nhan(string a, string b)
{
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
        tmp+=carry;
        carry=tmp/10;
        res=char(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}
int main()
{
    freopen("N0307C.INP","r",stdin);
    freopen("N0307C.OUT","w",stdout);
    int n;
    cin>>n;
    string k="1";
    for(int i=1;i<=n;i++)
    {
        k=nhan(k,"2");
    }
    cout<<k;
    
}