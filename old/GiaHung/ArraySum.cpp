#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("ArraySum.inp","r",stdin);
    freopen("ArraySum.out","w",stdout);
    int T, n, x;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> n;
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            cin >> x;
            sum=sum+x;
        }
        cout << sum << endl;
    }
    return 0;
}