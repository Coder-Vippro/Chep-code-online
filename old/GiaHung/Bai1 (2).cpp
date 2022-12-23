#include <bits/stdc++.h>
using namespace std;
string S;
int main()
{
    //freopen("bai1.INP", "r", stdin);
    //freopen("bai1.OUT", "w", stdout);
    getline (cin, S);
    long long n;
    cin >> n;
    for (int i = 0; i < S.size(); i++)
        if (S[i] == ' ' && S[i + 1] == ' '){
            S.erase(S.begin() + i + 1);
            i = i + 1;
        }
        else if (S[i] == ' ' && S[i + 1] == ',' && S[i + 2] == ' '){
            S.erase(S.begin() + i);
                i = i + 1;
        }
        else if (S[i] == ' ' && S[i + 1] == ',')
        {
            S[i] = S[i + 1];
            S[i + 1] = ' ';
            i = i + 1;
        }
        else if (S[i] == ' ' && S[i + 1] == '.' && S[i + 2] == ' ')
        {
            S.erase(S.begin() + i);
            S.erase(S.begin() + i+2);
            i = i + 1;
        }
        else if (S[i] == ' ' && S[i + 1] == '.')
        {
            S.erase(S.begin() + i);
            i = i + 1;
        }
    cout<<S<<'\n';
    return 0;

}

