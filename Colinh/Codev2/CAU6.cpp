#include <bits/stdc++.h>
using namespace std;
int dem1=0;dem2=0;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
        dem1++;
        else dem2++;
    }
}