#include<bits/stdc++.h>
using namespace std;
char a,b;
int n,m;
int main()
{
    cin>>m>>n;
    int x=1;
    int y=1;
    for(int i=m;i>0;i--)
    {
        cin>>a;
        x=x+(a-48)*pow(10,i-1);
    }
    for(int j=n;j>0;j--)
    {
        cin>>b;
        y=y+(b-48)*pow(10,j-1);
    }
    cout<<x+y-2;
}