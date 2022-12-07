#include <bits/stdc++.h>
using namespace std;
string s;
int n, dem[28], kq;
int main()
{   
    freopen("HOANVI.INP","r",stdin);
    freopen("HOANVI.OUT","w",stdout);
    cin >> s; n = s.length();
    for(int i = 0; i < n; ++i){
        memset(dem, 0, sizeof(dem));
        for(int j = i; j <= min(i + 25, n - 1); ++j)
        {
            ++dem[s[j] - 'a' + 1];
            if(dem[s[j] - 'a' + 1] > 1) break;
            int cnt = 0;
            for(int k = 0; k < 27; ++k) cnt += dem[k] != dem[k + 1];
            if(cnt <= 2) kq = max(kq, j - i + 1);
        }
    }
    cout << kq;
    return 0;
}