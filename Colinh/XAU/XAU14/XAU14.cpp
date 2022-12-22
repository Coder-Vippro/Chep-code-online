#include <bits/stdc++.h>

using namespace std;
int s[1000],d=0;
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++) s[a[i]]++;
    for(int i=0;i<b.size();i++)
    {
        s[b[i]]++;
        if(s[b[i]]==2) d++;
    }
    cout<<d;
    return 0;
}
