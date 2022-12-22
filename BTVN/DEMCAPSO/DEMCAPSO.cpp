#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    while(n--)
    {
        cin>>k;
        for(int i=1;i<=k;i++)
            for(int j=1;j<i;j++)
            {
                if(i+j<k)
                dem++;
            }
        cout<<dem;
        dem=0;
    }
}