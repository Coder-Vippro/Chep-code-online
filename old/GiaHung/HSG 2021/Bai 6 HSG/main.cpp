#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   string a;
   getline(cin,a);
   for(int i=0;i<a.length();i++)
        while(a[i]==a[i+1]) a.erase(i+1,1);
   cout<<a;
    return 0;
}
