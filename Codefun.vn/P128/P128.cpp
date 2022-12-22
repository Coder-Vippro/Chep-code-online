#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a+b+c>=15 && a>=4 && b>=4 && c>=4)
        {
            if(a>5 && b>5 && c>5)
            cout<<"Excellent"<<endl;
            else cout<<"Medium"<<endl;
        }
        else cout<<"Fail"<<endl;
    }
}