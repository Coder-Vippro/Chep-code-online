#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
string s;
string k="";
int dem=0;
bool ktdx(string s)
{
    string k=s;
    reverse(s.begin(),s.end());
    if(s==k)return true;
    else return false;
}
int main()
{
    freopen("CWORD.INP","r",stdin);
    freopen("CWORD.OUT","w",stdout);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1] && s[i+1]==' ')
        {
            s.erase(s.begin()+i+1);
            i--;
        }
    }
    if(s[0]==' ')s.erase(s.begin());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            k=k+s[i];
        }
        else
        {
            if(ktdx(k)==true)
            {
                dem++;
                k=="";
            }
            else k="";
        }
    }
    cout<<dem;
}
//xay dung ham kt xau doi xung
//duyet tung tu trong xau ban dau
//goi gam ktdx() ben tren neu dung tang bien kq len 1 don vi