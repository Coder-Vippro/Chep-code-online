#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int kq=1;
int main()
{
    int dem1=1;
    int dem2=1;
    cin>>n>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])dem1++;
        else break;
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==s[i-1])dem2++;
        else break;
    }
    if(s[0]!=s[n])kq=dem1+dem2-1;
    else kq=(dem1+1)(dem2+1);
    cout<<kq;

}