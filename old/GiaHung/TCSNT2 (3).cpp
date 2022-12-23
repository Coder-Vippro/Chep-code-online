#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TCSNT.inp","r",stdin);
    freopen("TCSNT.out","w",stdout);
    int i = 2, j, so, kt;
    int t=0;
    cin >> so;
    while (i <= so) {
        kt = 1;
        if (i != 0 && i != 1) {
            j = 2;
            while(j <= i/2) {
                if(i%j == 0) {
                    kt = 0;
                    break;
                }
                j++;
            }
        } else {
           kt = 0;
        }

        if(kt == 1) {
            t=t+i;
        }

       i++;
    }
    cout<< t;
    return 0;
}
