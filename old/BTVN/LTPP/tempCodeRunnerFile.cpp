#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    long long tong=1;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='0' && a[i+1]=='0')
        {
            a.erase(a.begin()+i);
            a.erase(a.begin()+i+1);
        }
    }
    for(int i=0;i<a.size();i++)
    {
        tong=tong*(a[i]-48);
    }
    cout<<tong;
}