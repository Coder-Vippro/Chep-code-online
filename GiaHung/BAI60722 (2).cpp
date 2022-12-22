#include<bits/stdc++.h>
using namespace std;
bool com(char a,char b)
{
    if(a>b)
    return true;
    else return false;
}
int main()
{
    freopen("BAI60722.INP","r",stdin);
    freopen("BAI60722.OUT","w",stdout);
string n;
cin>>n;
sort(n.size(),n.end(),com);
int t=0,cs;
bool ok=true;
for(int i=0;i<=n.size();i++)
{
    cs=int(n[i])-48;
    t=t+cs;
    if(cs==0) ok=false;
}
if(t%3>0) ok=true;
if(ok==true)cout<<-1; else cout<<n;
return 0;

    
}