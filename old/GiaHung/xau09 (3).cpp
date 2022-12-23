#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen ("xau09.inp","r",stdin);
    //freopen ("xau09.out","w",stdout);
    string s,a="";
    getline(cin,s);
    int n=s.length(),dt=1;
    for(int i=0;i<n;i++) {
            if(a.find(s[i])!=-1){
                    dt++;
                    a=a+s[i];
    }
    }
    cout<<dt;
    return 0;
}
