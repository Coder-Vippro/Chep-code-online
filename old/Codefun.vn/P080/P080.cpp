#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int p=s/60;
    if(p>=60 && p%60>9 && s%60>9)
    {
        cout<<p/60<<':'<<p%60<<':'<<s%60;
    }
    else if(p>=60 && p%60<9 && s%60>9)
    {
        cout<<p/60<<":0"<<p%60<<':'<<s%60;
    }
    else if(p>=60 && p%60>9 && s%60<9)
    {
        cout<<p/60<<':'<<p%60<<":0"<<s%60;
    }
    else if(p>=60 && p%60<9 && s%60<9)
    {
        cout<<p/60<<":0"<<p%60<<":0"<<s%60;
    }
    else if(p>=60 && p%60>9 && s%60>9 && p/60<10)
    {
        cout<<":0"<<p/60<<':'<<p%60<<':'<<s%60;
    }
    else if(p>=60 && p%60<9 && s%60>9 && p/60<10)
    {
        cout<<":0"<<p/60<<":0"<<p%60<<':'<<s%60;
    }
    else if(p>=60 && p%60>9 && s%60<9 && p/60<10)
    {
        cout<<":0"<<p/60<<':'<<p%60<<":0"<<s%60;
    }
    else if(p>=60 && p%60<9 && s%60<9 && p/60<10)
    {
        cout<<":0"<<p/60<<":0"<<p%60<<":0"<<s%60;
    }
   
}