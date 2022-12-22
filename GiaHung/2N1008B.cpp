#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("2N1008B.inp","r",stdin);
    //freopen("2N1008B.out","w",stdout);
    int n;
    cin >> n;
    int dem,d=0;

    for(int i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        d++;
        }
        cout<<d;

    return 0;
}
