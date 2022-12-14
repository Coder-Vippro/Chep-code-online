#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("CAYTHONG.inp","r",stdin);
    freopen("CAYTHONG.out","w",stdout);
int n;
cin >> n;
for(int i = 1; i <= n; i++) {
for(int j = i; j < n; j++) {
cout << "_";
}
 for(int j = 1; j <= (2*i-1); j++) {
cout << "*";
}
for(int j = i; j < n; j++) {
cout << "_";
}
 cout << endl;
}
return 0;
}
