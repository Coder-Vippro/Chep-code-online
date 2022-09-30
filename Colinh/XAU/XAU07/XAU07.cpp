#include <iostream>
#include <string>
using namespace std;
string s;
int dem=1;
bool kt(char s)
{
    if(s>='A' && s<='z')
        return true;
        else return false;
        return false;
}
int main()
{
    freopen("XAU07.INP","r",stdin);
    freopen("XAU07.OUT","w",stdout);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
            if(kt(s[i])==true && s[i+1]==' ')
            dem++;
    }
    cout<<dem;
}
