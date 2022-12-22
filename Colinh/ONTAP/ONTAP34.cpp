#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(n-i-j>=0)
                dem++;
            }
        }
        cout<<dem;
}