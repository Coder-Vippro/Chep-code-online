#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(a.find(b,0)!=a.npos)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
