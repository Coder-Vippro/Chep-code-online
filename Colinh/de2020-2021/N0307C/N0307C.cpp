#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
string nhanNho(char a, string b)
{
    string s = "";
    int temp = 0;
    for (int i=b.length()-1; i>=0; i--)      
    {
        temp = (a-48)*(b[i]-48) + temp;
        s=char(temp%10+48)+s;
        temp = temp/10;
    }
    if (temp>0)s=char(temp%10+48)+s;
    return s;
}
string nhan(string a, string b){
    string s = "";
    int l=a.length();
    string s1;
    for (int i=l-1; i>=0; i--){
        s1[i] = nhanNho(a[i],b);
        s1[i].insert(s1.length(),l-i-1,'0');
        s =sum(s, s1);
    }
    return s;
}
int main()
{
    freopen("N0307C.INP","r",stdin);
    freopen("N0307C.OUT","w",stdout);
    int n;
    cin>>n;
    string k="2";
    for(int i=1;i<=n;i++)
    {
        k=nhan(k,k);
    }
    cout<<k;
}