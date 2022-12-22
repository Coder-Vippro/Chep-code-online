#include <bits/stdc++.h>
using namespace std;
int x,y;
char tp(int a,int b)
{
    char c;
    string m;
    a%=b;
    for(int i=0;i<=69;i++)
    {
        c=(char)(((a*10)/b)+48);
        a=(a*10)%b;
    }
    return c;
}
int main()
{
    cin>>x>>y;
    cout << tp(x,y);
    return 0;
}