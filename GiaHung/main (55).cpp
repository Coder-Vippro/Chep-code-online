#include <iostream>

using namespace std;

int main()
{
    int n, dem=0,dem1=0,dem2=0;
    string s;
    getline(cin,s);
    n=s.length();
    for(int i=0;i<n;i++)
    {
        if (s[i]==' ') dem1++;
        if(s[i]>='0' && s[i]<='9')dem++;
        if(s[i]>='a' && s[i]<='z')dem2++;
    }
    cout<<dem2<<'\n'<<dem<<'\n'<<dem1<<'\n';
    return 0;
}
