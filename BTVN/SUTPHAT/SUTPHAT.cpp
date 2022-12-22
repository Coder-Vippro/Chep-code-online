#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    int n;
    cin>>n;
    int dem1=0;
    int dem2=0;
    while(n--)
    {
        cin>>a>>b>>c;
        while(c>1)
        {
            if(a%c==0)
            {
                a--;
                dem1++;
            }
            else if(b%c==0)
            {
                b--;
                dem2++;
            }
            else c--;
        }
        cout<<dem1<<' '<<dem2<<endl;
        dem1=0;
        dem2=0;
    }
    
}