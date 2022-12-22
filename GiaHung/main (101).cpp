#include <iostream>

using namespace std;
int n,t=0; string x;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        t+=int(x[0]-48)*5;
        t+=int(x[1]-48)*11;
        t+=int(x[2]-48)*7;
        t+=int(x[3]-48)*23;
        t+=int(x[4]-48)*3;
        t+=int(x[5]-48)*17;
        cout<<char(t%13+65)<<'\n';
        t=0;
    }

    return 0;
}
