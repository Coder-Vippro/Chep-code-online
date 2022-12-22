#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    sort(s.begin(), s.end());
    if(s[0]==s[s.length()-1])cout<<s[0];
    else cout<<s[s.length()-1]<<" "<<s[0];
    return 0;
}
