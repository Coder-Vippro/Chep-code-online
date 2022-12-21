#include <bits/stdc++.h>
using namespace std;
bool flag=false;
int main()
{
    freopen("BAI07.INP","r",stdin);
    freopen("BAI07.OUT","w",stdout);
    string s;
    cin>>s;
    int dem;
    for(int i=0;i<s.size();i++)
    {
        dem=dem+s[i];
        if(s[i]=='0')flag=true;
    }
    if(flag==false || dem%3!=0)
    {
        cout<<-1;
        return 0;
    }
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s;

}