#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CUUCHUONG.inp","r",stdin);
    freopen("CUUCHUONG.out","w",stdout);
    int n;
    cin>>n;
    for(int i = 1; i <= 10; i++) {
        cout << i << " x " << n << " =" << n*i << endl;
    }
    return 0;
}
