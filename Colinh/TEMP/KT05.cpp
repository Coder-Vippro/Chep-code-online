#include <bits/stdc++.h>

using namespace std;
int m,n,d,kq,vt;string s;

int main()
{
    freopen("KT05.inp","r",stdin);
	freopen("KT05.out","w",stdout);
	while(getline(cin,s)){d=0;vt=0;kq=0;
        for(int i=0;i<s.size();i++){
            d++;if(s[i]==' ')d=0;if(d>kq){kq=d;vt=i;}
        }
        for(int i=kq-1;i>=0;i--)cout<<s[vt-i];
        cout<<'\n';
	}

    return 0;
}
