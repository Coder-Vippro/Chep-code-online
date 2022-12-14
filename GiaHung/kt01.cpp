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
 