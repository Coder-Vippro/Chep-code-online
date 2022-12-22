#include <bits/stdc++.h>

using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;
    string Max = "";
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            int ii=i,jj=j;
            string temp = "";
            while (a[i] == b[j] && i < a.size() && j < b.size()) {
                temp += a[i];
                if (temp.size() > Max.size()) Max = temp;
                i++;
                j++;
            }
            i=ii;j=jj;
        }
    }
    if (Max.size() > 0) cout << Max << '\n';
    else cout << "khong co" << '\n';
}
int main()
{
    freopen("bai_1.inp", "r", stdin);
    freopen("bai_1.out", "w", stdout);
    int n;
    cin >> n;
    while (n > 0) {
        solve();
        n--;
    }
}
