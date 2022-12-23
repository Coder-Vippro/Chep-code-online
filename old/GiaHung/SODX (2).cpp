#include <bits/stdc++.h>

using namespace std;
string daonguoc(string n){
    string s="";
for(int i=n.size()-1;i>=0;i--)s=s+n[i];
return s;
}
int main()
{
    string s;
    cin>>s;
    if(s==daonguoc(s))cout<<"YES";
    else cout<<"NO";
    return 0;
}
