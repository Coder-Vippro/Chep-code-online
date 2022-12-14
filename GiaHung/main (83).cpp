#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int d=0,max=0;
    string a,b;
    getline(cin,a);
    a=a+' ';
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==' ')
        {
            if(a[i-1]>='a'&& a[i-1]<='z')
{
    d++;
}

        }
        s[a[i]]++;
    }
    for(int i=97; i<=122;i++;)
    {
        if(Max<s[i])
        {
            Max=s[i];
            b=char(i);
        }
    }
    cout<<d<<' '<<b;
    return 0;
}
