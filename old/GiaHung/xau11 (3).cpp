#include <bits/stdc++.h>

using namespace std;
char C(char kt,int n){
    n=n%24;
    int a=int(kt)-n;
    if (a<97) return char(a+24);
    else return char(a);
}
int main()
{
    freopen("xau11.inp","r",stdin);
	freopen("xau11.out","w",stdout);
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    int a=s.length();
    for(int i=0 ;i<a;i++) {
            cout<<C(s[i],n);
    }
    return 0;

}
