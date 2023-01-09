#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
    freopen("GIAIMA.INP","r",stdin);
    freopen("GIAIMA.OUT","w",stdout);
    getline(cin,s);
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i] && s[i]==' ')
            {
                s.erase(s.begin()+i);
                i--;
            }
    }
    if(s[0]==' ')s.erase(s.begin());
    s.insert(0," ");
    while(cin>>n)
    {
        int dem=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i-1]==' ' && s[i]!=' ')
            {
                dem++;
            }
            if(dem==n)
            {
                while(s[i]!=' ' && i<s.size())
                {
                    cout<<s[i];
                    i++;
                }
                cout<<' ';
                break;
            }

        }
    }
    return 0;
}
