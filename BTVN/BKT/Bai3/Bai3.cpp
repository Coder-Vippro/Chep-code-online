#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,k;
    cin>>m>>n>>k;
    long long ngay=0,thoc=m;
    while(thoc<n)
    {
        if(thoc<n)
        {
            thoc=thoc+k;
            ngay++;
        }
        if(thoc>=n)
        {
            cout<<ngay;
            return 0;
        }
        if(k%2==0 && k>=2)
        {
            thoc=thoc-k/2;
            ngay++;
        }
        else if(k%2==1 && k>=2) {thoc=thoc-(k-1)/2;ngay++;}
        else ngay++;
        if(k>1)
        k--;
        
    }
    cout<<ngay;
    
}