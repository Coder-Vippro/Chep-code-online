#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
string s;
string tp;
int main()
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1] && s[i+1]==' ')
        {
            s.erase(s.begin()+i+1);
            i--;
        }
    }
}