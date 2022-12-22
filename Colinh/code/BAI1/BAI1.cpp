#include <bits/stdc++.h>

using namespace std;
int n;
string s="";
int i=0;
int main()
{
    cin>>n;
    while(n>0)
    {
        s=s+char(n%2+48);
        n=n/2;
        i++;
    }
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}
