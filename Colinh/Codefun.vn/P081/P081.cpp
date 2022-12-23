#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    string c=a+b;
    for(int i=c.size()-1;i>=0;i--)
    {
        
        if(c[c.size()-1]=='0' && c[i-1]=='0')
        {
            c.erase(c.begin()+c.size()-1);  
        }
    }
    for(int i=c.size()-1;i>=0;i--)
    {
        cout<<c[i];
    }
}