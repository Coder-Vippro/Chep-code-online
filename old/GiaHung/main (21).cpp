#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char x;
    cin>>x;
    cin.ignore();
    getline(cin,s);
     int n=s.size(),cnt =0;

     for(int i=0;i<n;i++)
        if(s[i]==x) cnt++;
     cout<<cnt<<'\n';

     for(int i=0;i<n;i++)
        if(s[i]== x)
        cout<<i<<" ";
    return 0;
}
