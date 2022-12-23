#include <bits/stdc++.h>
using namespace std;
int so[] = {1,1,2,6,4,2,2,4,2,8};
int kt(int n){
    if (n < 10)return so[n];
    if (((n/10)%10)%2 == 0)return (6*kt(n/5)*so[n%10])%10;
    else return (4*kt(n/5)*so[n%10]) % 10;
}
int main()
{
    int n;cin>>n;
    cout <<kt(n);
    return 0;
}