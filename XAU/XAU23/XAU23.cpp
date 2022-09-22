#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-48)%2==1)
            s.erase(i);

    }
    cout<<s.size();
    return 0;
}
