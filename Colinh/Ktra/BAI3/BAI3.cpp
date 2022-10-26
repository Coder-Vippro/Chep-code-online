#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string k=s;
    reverse(s.begin(),s.end());
    if(k==s)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}