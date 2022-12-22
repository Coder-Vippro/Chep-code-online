#include <bits/stdc++.h>
using namespace std;
string s;
string a[256];
int dem=0;
int main()
{
    getline(cin,s);
    int j = 0;
    while (s.find(' ') == 0)
       s.erase(0,1);

    s += " ";
    int n=s.size();

    for (int i=0; i<=n-1; i++)
      if (s[i] != ' ' && s[i-1] == ' ')
        j = i;
      else
       if (s[i] == ' ' && s[i-1] != ' ')
        {
          a[++dem] = s.substr(j,i-j);
          j=i+1;
        }
    cout << dem << endl;
    for (int i=1;i<=dem;i++) cout << a[i] << endl;
    return 0;
}
