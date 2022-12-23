#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("SO20.inp","r",stdin);
    freopen("SO20.out","w",stdout);
    int n;
    cin >> n;
    if(n>20)cout<<n<<" lon hon 20";
    else {
    for(int i = n; i <=20; i++){
        cout <<i <<" ";
    }
    }
    return 0;
}
