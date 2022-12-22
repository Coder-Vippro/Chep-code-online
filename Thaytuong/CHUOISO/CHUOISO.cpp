#include <bits/stdc++.h>
using namespace std;
string s;
string tong (string s, int n)
{
    string temp="";
    for(int i=2;i<=n;i++)
    {
        
            int k=s[s.size()-1]-48+s[s.size()-2]-48+s[s.size()-3]-48;
            if(k<10)s=s+char(k+48);
            else
            {
                while(k>0)
                {
                    temp=temp+char(k%10+48);
                    k=k/10;
                }
                reverse(temp.begin(),temp.end());
                s=s+temp;
                temp="";
            }
    }
    return s;
}
int n;
int main()
{
    freopen("CHUOISO.INP","r",stdin);
    freopen("CHUOISO.OUT","w",stdout);
    cin>>s;
    while(cin>>n)
    {
        string k=tong(s,n);
        cout<<k[n-1]<<'\n';
    }
   
}
