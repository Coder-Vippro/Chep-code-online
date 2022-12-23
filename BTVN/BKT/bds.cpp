#include <bits/stdc++.h>

using namespace std;
int fmcs(int n){
    int m=0;
    while(n>0){
        m=max(m, n%10);
        n/=10;
    }
    return m;
}
int main()
{
    int n, d=0;
    cin>>n;
    while(n>0){
        d++;
        n-=fmcs(n);
        if(n==0){cout<<d;return 0;}
    }
    return 0;
}
