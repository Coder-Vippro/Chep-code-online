#include <bits/stdc++.h>

using namespace std;
char mahoachar(char kt,int n){
   return char(a+32);
}
string mahoastring(string kt,int n){
    string s="";
    int a=kt.length();
    for(int i=0 ;i<a;i++) {
            s=s+mahoachar(kt[i],n);
    }
    return s;
}
int main()
{
    //freopen("MAHOA.inp","r",stdin);
	//freopen("MAHOA.out","w",stdout);
    string s;int n;
    cin>>n
    while(getline(cin,s))cout<<mahoastring(s,n);
    return 0;

}
