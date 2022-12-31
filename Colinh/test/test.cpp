#include <iostream>
#include <string>
using namespace std;
string s;
string k;
string maxx;
int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    getline(cin,s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]!=' ')
        { 
            k=k+s[i];
        }
        if(k.size()>maxx.size())
        {
            maxx=k;
        }
        if(s[i]==' ')
        {
            k="";
        }
    }
    cout<<maxx;
    
}