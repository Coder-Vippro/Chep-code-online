#include <bits/stdc++.h>

using namespace std;

int main()
{
   freopen ("PLKITU.inp","r",stdin);
    freopen ("PLKITU.out","w",stdout);
    char kt;
    cin>>kt;
    if(kt>='A' && kt<='Z') cout<<"Chu cai";
else if(kt>='a' && kt<='z') cout<<"Chu cai";
else if(kt>='0' && kt<='9') cout<<"Chu so";
else  cout<<"khac";
    return 0;
}
