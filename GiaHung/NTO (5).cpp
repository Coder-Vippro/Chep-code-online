#include <bits/stdc++.h>
using namespace std;
int nto(int n)
{
    if (n < 2){
        return 1;
    }

    for (int i = 2; i < (n - 1); i++){
        if (n % i == 0){
            return 1;
        }
    }

    return 0;
}
int main()
{
    freopen("nto.inp","r",stdin);
    freopen("nto.out","w",stdout);
    int n,a,b;
    cin>>n;
    a=n-1;
    b=n+1;
    while(nto(a))a--;
    while(nto(b))b++;
    cout<<a<<endl<<b;
}
