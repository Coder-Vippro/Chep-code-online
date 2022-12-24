#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int a,b,c;
int main()
{
    freopen("TIEUTIEN.INP","r",stdin);
    freopen("TIEUTIEN.OUT","w",stdout);
    cin>>a>>b>>c;
    for (int i=c/a; i>=0; i--)
    {
        for(int n=0;n<=c/b;n++)
        if(i*a+n*b==c)
        {
            cout<<i+n<<endl;
            return 0;
        }
    }
    
}