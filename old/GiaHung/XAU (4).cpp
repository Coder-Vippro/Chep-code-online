#include <bits/stdc++.h>
using namespace std;
string CauC(string s,int k){
    int len=s.size(),d=0,vt1=0,vt2=0,c=k-1;
  for (int i=0;i<len;i++){
      if(s[i]==' ')d++;
      if(d==c-1)vt1=i;
      if(d==c)vt2=i;
  }
     string a=s.substr(vt1+2,vt2);
     return a;
}
string S;
int main()
{
    //freopen("XAU.INP", "r", stdin);
    //freopen("XAU.OUT", "w", stdout);
    getline (cin, S);
    long long n;
    cin >> n;
    for (int i = 0; i < S.size(); i++)
        if (S[i] == ' ' && S[i + 1] == ' ')
        {
            S.erase(S.begin() + i + 1);
            i = i + 1;
        }
        else if (S[i] == ' ' && S[i + 1] == ',' && S[i + 2] == ' ')
        {
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
    cout<<CauC(S,n)<<'\n';
    return 0;

}

