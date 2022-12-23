#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("quyluat.inp","r",stdin);
    freopen("quyluat.out","w",stdout);
    int n, m, so = 1;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cout << so << endl;
        so = so + m;
    }
    return 0;
}
