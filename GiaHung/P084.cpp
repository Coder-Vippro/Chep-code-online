#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s;
    int h=0;
    while(n>0)
    {
        s[h]=n%2+48;
        n=n/2;
        h++;
    }
    for(int i=h-1;i>=0;i--)
    {
        cout<<s[i];
    }
    