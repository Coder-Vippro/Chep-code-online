#include <iostream>
#include <string>
using namespace std;
string s;
int dem=0;
char ch;
int main()
{
    getline(cin,s);
    cin>>ch;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]==ch)
            dem++;
    }
    cout<<dem;
    return 0;
}
