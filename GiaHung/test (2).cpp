#include <bits/stdc++.h>
using namespace std;
int main()
{
//freopen("TEST.inp","r", stdin);
//freopen("TEST.out","w",stdout);
string s;
cin >> s;
int k;
cin >> k;
string m[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int cm;
for (int i = 0; i < 12; i++){
if (s == m[i]) {
cm = i;}}
if (cm + k <= 12) cout << m[cm + k - 1];
else cout << m[(cm + k) % 12];
return 0 ;
}
