#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if (s[i]!=s[i+1])
        {
            cout<<s[i];
        }
    }

    return 0;
}
