#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    float b;
    cin>>a;
    while(a--)
    {
        cin>>b;
        if(b<5)
        cout<<"E"<<endl;
        if(b>=5 && b<6)
        cout<<'D'<<endl;
        if(b>=6 && b<7)
        cout<<'C'<<endl;
        if(b>=7 && b<8)
        cout<<'B'<<endl;
        if(b>=8 && b<9)
        cout<<'A'<<endl;
        if(b>=9 && b<=10)
        cout<<"A+"<<endl;
        if(b>10)cout<<-1<<endl;
    }
}