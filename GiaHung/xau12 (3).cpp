#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("xau15.inp","r",stdin);
	//freopen("xau15.out","w",stdout);
    string s;
    getline(cin,s);
    string a;
    getline(cin,a);
    if(s.find(a,0)!=-1)cout<<"YES";
    else cout<<"NO";
    return 0;

}
