//BCNN UCLN
#include <bits/stdc++.h>
using namespace std;
int UCLN(int a, int b) //ham tim UCLN Ps:neu dung ham UCLN thi phai dung ham nay / __gcd
{
    if (b == 0)
    return a;
    else return UCLN(b,a%b);
}
int BCNN(int a,int b) //ham tim BCNN su dung ham UCLN
{
    if(a<b && b%a==0)
    return b;
    if(a>b && a%b==0)
    return a;
    int n=(a*b)/UCLN(a,b);
    return n;
}
bool ktnt(int x,int y) //kiem tra nt kieu cu
{
    if(x<2)return false;
    if(x==2)return true;
    for(int i=2;i*i<n=;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
bool ktnt(int x) //ham ktnt su dung sangnt
{
    if(x==1)return fasle;
    if(x/2!=1 && x%2==0)
    return false;
    if(x/3!=1 && x%3==0)
    return false;
    return true;
}
int A[10001];
int main()
{
    
    int n;
    cin>>n;
    for(int i=2;i<=n;i++) //sang nguyen to
    {
        cin>>A[i];
        if(A[i]==1)A[i]==0;
        if(A[i]/2!=1 && A[i]%2==0)
        A[i]=0;
        if(A[i]/3!=1 && A[i]%3==0)
        A[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        if(A[i]!=0)
        {
            cout<<A[i]<<' ';
        }
    } 
}