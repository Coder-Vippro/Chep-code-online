#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen ("KITU.inp","r",stdin);
    //freopen ("KITU.out","w",stdout);
    char a;
    cin>>a;
    string s;
    getline(cin,s);
    int n=s.length(),d=0;
    for(int i=0 ;i<n;i++) {
            if(s[i]==a)d++;
    }
    cout<<d;
    return 0;
}
