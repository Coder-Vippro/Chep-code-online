#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
string s;
vector <string> p;
int n;
int main()
{
    freopen("KSTR.INP","r",stdin);
    freopen("KSTR.OUT","w",stdout);
    cin>>s>>n;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<i+n;j++)
        {
            p.push_back(s.substr(i,j-i+1));
        }
    }
    sort(p.begin(),p.end());
    for(int i=0;i<p.size();i++)
    {
        if(p[i]!=p[i+1])
        {
            n--; 
        }
        if(n==0)
        {cout<<p[i];return 0;}
    }
}