#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    freopen("KIEUMOI.INP","r",stdin);
    freopen("KIEUMOI.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]==' ')
            {s.erase(i);s.erase(i-1);}
        }
        if(s[0]==' ')s.erase(0);
        if(s[0]>='A' && s[0]<='Z')s[0]=s[0]+32;
        for(int i=0;i<s.size();i++)
        {
            if(s[i+1]>='A' && s[i+1]<='Z' && s[i]>='a' && s[i]<='z')
            {
                s[i+1]=s[i+1]+32;
                s.insert(s.begin()+i+1,'_');
            }
            else if(s[i]>='A' && s[i]<='Z' && s[i+1]>='A' && s[i+1]<='Z')
            {
                s[i]=s[i]+32;
                s[i+1]=s[i+1]+32;
                s.insert(s.begin()+i+1,'_');
            }
        }
        
        cout<<s<<endl;
    }
}