#include <bits/stdc++.h>
using namespace std;
long long XAU_CON_CHUNG(string a, string b){
    int n = a.size(),m = b.size(),max_Size;
    string su = "";
    int L[n+1][m+1];
    for(int i=0; i<=n; i++)L[i][0] = 0;
    for(int j=0; j<=m; j++)L[0][j] = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i-1] == b[j-1])L[i][j] = L[i-1][j-1] + 1;
            else{
                if(L[i-1][j] >= L[i][j-1])L[i][j] = L[i-1][j];
                else L[i][j] = L[i][j-1];
            }
        }
    }
    max_Size = L[n][m];
    int i = n;
    int j = m;
    while(L[i][j] != 0){
        if(a[i-1] == b[j-1]){
            su += a[i-1];
            i--;
            j--;
        }
        else if(L[i-1][j] >= L[i][j-1])i--;
            else j--;
        }
        return max_Size;
}
int main(){
    freopen("XAU_CON_CHUNG.inp","r",stdin);
    freopen("XAU_CON_CHUNG.out","w",stdout);
    string a, b;
    getline(cin,a);
    getline(cin,b);
    cout<<XAU_CON_CHUNG(a,b);
    return 0;
}
