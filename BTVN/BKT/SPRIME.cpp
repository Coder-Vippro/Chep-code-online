#include <bits/stdc++.h>

using namespace std;
long long tcs(int n){
    int tcs=0;
    while(n>0){
        tcs+=n%10;
        n/=10;
    }
    return tcs;
}
bool kt(int n)
{
    if(n<2)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)return 0;
    return 1;
}
int main()
{
    int t, l, r, d=0;
    cin>>t;
    while(t--){
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            if(kt(i)==1 && tcs(i)%5==0)d++;
        }
        cout<<d<<endl;
        d=0;
    }
    return 0;
}
