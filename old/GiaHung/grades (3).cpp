#include <bits/stdc++.h>

using namespace std;
char kt(int t)
{
    if(t>=80 && t<=100)return 'A';
    if(t>=70 && t<=79)return 'B';
    if(t>=60 && t<=69)return 'C';
    if(t>=50 && t<=59)return 'D';
    if(t>=0 && t<=49)return 'F';
    if(t<0 || t>100)return 'X';
}
int main()
{
    freopen("grades.inp","r",stdin);
    freopen("grades.out","w",stdout);
    int t,a[3001];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a[i];
        cout<<kt(a[i])<<" ";
    }
    return 0;
}
