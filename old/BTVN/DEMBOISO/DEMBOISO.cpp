#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l,r,a,b;
    int dem=0;
    while(n--)
    {
        cin>>l>>r>>a>>b;
        for(int i=l;i<=r;i++)
        {
            if(i!=0)
                if(i%a==0 || i%b==0)
                dem++;
        }
        cout<<dem<<'\n';
        dem=0;
    }
}