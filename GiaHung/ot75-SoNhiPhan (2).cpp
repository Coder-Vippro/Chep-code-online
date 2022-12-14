#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;
    string s;
    cin>>n;
   while(n!=0) {
        char m=n%2+48;
        s=s+m;
        n=n/2;
    }
        cout<<s;
}
