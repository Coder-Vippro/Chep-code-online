#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("SumSeries.inp","r",stdin);
    freopen("SumSeries.out","w",stdout);
    int T;
    long long n;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> n;
        cout << (n * (n + 1)) / 2 << endl;
    }
    return 0;
}
