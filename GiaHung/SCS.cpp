#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;cin>>s;
    int dem,a,n=s.size()-1;
    if(s[n]=='1')a=1;
   if(s[n]=='0')a=2;
    for(int i=n-1; i>=1; i--){
      if(s[i]=='0')a=a*2;
      if(s[i]=='1')a=a*2+1;
    }
    cout<<a;
    return 0;
}
