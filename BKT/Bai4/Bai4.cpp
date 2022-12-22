#include <bits/stdc++.h>
using namespace std;
stringstream ss;
bool ktdx(long long n)
{
    long long k=n;
    long long dn=0;
    while(k>0)
    {
        dn=dn*10+k%10;
        k=k/10;
    }
    if(dn==n)return true;
    else return false;
}
int main()
{
    long long x;
    string a;
    cin>>a;
    char temp;
    string b;
    b=a;
    int dem2=0;
    int dem=0;
    sort(b.begin(),b.end());
    int h=a.size();
    for(long long i=0;i<a.size();i++)
    {
        if(b[i]==b[i+1])
        dem++;
        else
        {
            if(dem%2==1)
            dem2++;
        }
    }
    if(dem2%2==1 && a.size()%2==0)
    {
        cout<<0;
        return 0;
    }
    for(long long i=0;i<a.size();i++)
    {
        if(b[i]==b[i+1])
        {
            a[i]=b[i];
            a[h]=b[i];
        }
        i=i+1;
        h--;
    }
    ss<<a;
    ss>>x;
    if(ktdx(x)==true)
    {
        cout<<x;
    }
    else cout<<0;
    cout<<x;
    
    
    
    
}