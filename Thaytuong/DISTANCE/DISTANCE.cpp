#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
string s,k;
int dem=0;
int main()
{
    freopen("DISTANCE.inp","r",stdin);
    freopen("DISTANCE.out","w",stdout);
    cin>>s>>k;
    sort(s.begin(),s.end());
    sort(k.begin(),k.end());
    for(int i=0;i<min(s.size(),k.size());i++)
    {
        if(k.find(s[i])>max(s.size(),k.size()))dem++;
    }
    int h=s.size(),l=k.size();
    cout<<dem+abs(h-l);
}