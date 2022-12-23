#include <bits/stdc++.h>

using namespace std;
int n;
string a;
string b;
int sl(string s){
    set<char>kt;
    for (int i = 0; i <= s.size(); i++){
        kt.insert(s[i]);
    }
    return kt.size();
}
bool check(string a, string b){
    int mot = sl(a), hai = sl(b), dmot = a.size(), dhai = b.size();
    if (mot == hai && dmot == dhai) return true;
    else return false;
}
bool check(string a, string b){
    int mot = sl(a), hai = sl(b), dmot = a.size(), dhai = b.size();
    if (mot == hai && dmot == dhai) return true;
    else return false;
}
int main()
{
    freopen("DANGCAU.INP", "r", stdin);
    freopen("DANGCAU.OUT", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (check(a, b) == true)cout<<"CO"<<'\n';
        else cout << "KHONG" << '\n';
    }
    return 0;
}
