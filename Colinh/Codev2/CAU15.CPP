#include <bits/stdc++.h>

using namespace std;

const char CHAR_55 = 55;
const char CHAR_48 = 48;


int chuyendoi(int n, int b) {
    if (n < 0 || b < 2 || b > 16 ) {
            cout<<"ko hop le";
        return 0;
    }
    int i;
    char dl[20];
    int count = 0;
    int m;
    int dl2= n;
    while (dl2 > 0) {
        if (b > 10) {
            m = dl2 % b;
            if (m >= 10) {
                dl[count] = (char) (m + CHAR_55);
                count++;
            } else {
                dl[count] = (char) (m + CHAR_48);
                count++;
            }
        } else {
            dl[count] = (char) ((dl2% b) + CHAR_48);
            count++;
        }
        dl2 = dl2 / b;
    }
    for (i = count - 1; i >= 0; i--) {
        cout<<dl[i];
    }
    return 1;
}

int main() {
    int n ;
    cin>>n;
 chuyendoi(n, 16);
    return 1;
}
