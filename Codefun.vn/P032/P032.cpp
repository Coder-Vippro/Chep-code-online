#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<s[j];
        }
        cout<<'\n';
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<s[j];
        }
        cout<<'\n';
    }
}