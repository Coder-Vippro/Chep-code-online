#include <bits/stdc++.h>

using namespace std;
char CEASA(char kt,int n){
    n=n%24;
    int a=int(kt)-n;
    if (a<97) return char(a+24);
    else return char(a);
}
int main()
{
    //freopen("CEASA.inp","r",stdin);
	//freopen("CEASA.out","w",stdout);
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    int a=s.length();
    for(int i=0 ;i<a;i++) {
            cout<<CEASA(s[i],n);

    }
    return 0;

}
