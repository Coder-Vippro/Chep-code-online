#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]>='0' && s[i]<='9')
            s.erase(s.begin()+i);
    }
    cout<<s;
    return 0;
}
