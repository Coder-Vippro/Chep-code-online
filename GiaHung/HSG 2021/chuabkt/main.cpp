#include <bits/stdc++.h>

using namespace std;

string xau(long long a)
{
    string d="";
    while(a!=0)
    {
        d=char(a%10+48)+d;
        a=a/10;
    }
    return d;
}
bool kt(long long a)
{
    long long i=1;
    while(a>0)
    {
        a=a-i;
        i++;
    }
    if(a==0) return true;
    else return false;
}

long long csln(long long a)
{
    int Max=0;
    string b=xau(a);
   for(int i=0;i<b.size();i++)
   {
       if(b[i]-48>Max)
       {
           Max=b[i]-48;
       }
   }

#include <bits/stdc++.h>
using namespace std;
bool tonglt(string x)
{
    stringstream ss;ss<<x;
    long long n,t=1;ss>>n;
    while(t*(t+1)/2<n)
    {
        t++;
    }
    return n==t*(t+1)/2 ;
}
string x;
char ktln(string x)
{
    char a;
    for(int i=0;i<x.size();i++)
    if(a<x[i])a=x[i];
    return a;
}
string cong(string  s,string x)
{
    string t="";
    if(s.size()<x.size())
    {
        int k=s.size();
        for(int i=1;i<=x.size()-k;i++) s="0"+s;
    }
    if(x.size()<s.size())
