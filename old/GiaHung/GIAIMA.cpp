#include<bits/stdc++.h>

using namespace std;

string Tach(string s,int j){
    string a=s,b,c;
    int maxlength=0;
    for(int i=0;i<=a.size();i++){
        if(a[i]!=32&&a[i]!='\0'){
        b[j++] = a[i];
    }else{
            b[j]='\0';
            if(b.size() > maxlength){
                c=c+b;
                maxlength=b.size();
            }
            j = 0;
        }
    }
    return c;
}
int main()
{
    //freopen("GIAIMA.inp", "r", stdin);
    //freopen("GIAIMA.out", "w", stdout);
    string a;int b;
    getline(cin,a);
    cin>>b;
    cout<<Tach(a,b);
}
