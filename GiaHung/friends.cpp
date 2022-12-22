#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("friends.inp", "r", stdin);
    freopen("friends.out", "w", stdout);
    int m,n;
    string s,s1;
    cin >> m >> s;
    n=(m-1)/2;
    for(int i=0; i<m; i++)
    {
        s1=s;
        s1.erase(i,1);
        string s2=s1.substr(n,n);
        s1.erase(n,n);
        if(s2==s1)
            {
            cout << s1;
            return 0;
            }
    }
}
