#include <bits/stdc++.h>
using namespace std;
bool dx(string s)
{
    string k=s;
    reverse(s.begin(),s.end());
    if(k==s)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    if(dx(s)==true)
    cout<<"YES";
    else cout<<"NO";
}