#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("mahoa.inp","r",stdin);
    freopen("mahoa.out","w",stdout);
    int k;string s;
    cin>>k; getline(cin,s);
    while(getline(cin,s))
    {
        for(int i=0;i<s.length();i++)
        if(s[i]!=' ')
        {
            int ma=char(s[i]);
            ma=ma+k;
            s[i]=char(ma);
        }
        cout<<s<<endl;
    }

    return 0;
}
