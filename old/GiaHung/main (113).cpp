#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    long long n;
    cin>>n;long long s=n,snt=0,i=2;
    while(s>1){
        if(s%i==0){while(s%i==0)s=s/i;snt++;}
        i++;
    }
    cout<<snt;

}
