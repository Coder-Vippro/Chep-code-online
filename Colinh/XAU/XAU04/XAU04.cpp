#include <iostream>
#include <string>
using namespace std;
string s;
int dem=0;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
            dem++;
    }
    cout<<dem;
    return 0;
}
