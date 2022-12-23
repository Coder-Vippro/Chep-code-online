#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Fizzbuzz.inp","r",stdin);
    freopen("Fizzbuzz.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    for(int i= 1;i<=a ;i++){
        if(i%b==0 && i%c!=0)cout<<"Fizz"<<endl;
    else if(i%b!=0 && i%c==0) cout<<"Buzz"<<endl;
    else if(i%b==0 && i%c==0) cout<<"FizzBuzz"<<endl;
    else cout<<i<<endl;
    }
    return 0;
}
