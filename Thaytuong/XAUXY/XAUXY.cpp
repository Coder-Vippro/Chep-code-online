#include <bits/stdc++.h>
using namespace std;
string s;
int kq=0;
int x;
int main()
{
    freopen("XAUXY.INP","r",stdin);
    freopen("XAUXY.OUT","w",stdout);   
    cin>>x>>s;
    int n=s.size();
    string x,y;
    for(int vt=0;vt<n-1;vt++)
    {
        x=s.substr(0,vt);
        y=s.substr(vt,n);
        int d=0;
        for(char ch='a';ch<='z';ch++)
        {
            if(x.find(ch,0)!=x.npos && y.find(ch,0)!=y.npos)d++;
            if(d>kq)kq=d;
        }
    }
    cout<<kq;
    return 0;
}
