#include <bits/stdc++.h>
using namespace std;
string S;
int call;
int counta=0;
int countb=0;
int main()
{
    freopen("nicestr.inp","r",stdin);
    freopen("nicestr.out","w",stdout);
    cin>>call;
    while(call--)
    {
        cin>>S;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='a')
            counta++;
            else if(S[i]=='b')
            countb++;
        }
    }
    
}