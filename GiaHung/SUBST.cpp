#include <bits/stdc++.h>

using namespace std;

string X,Y;
int a[4001][4001],kq=0;
int main()
{
    freopen("SUBST.INP","r",stdin);
    freopen("SUBST.OUT","w",stdout);
    cin>>X>>Y;
    a[0][0]=0;
    for(int i=0;i<X.size();i++)a[i][0]=0;
    for(int i=0;i<Y.size();i++)a[0][i]=0;
    for(int i=0;i<X.size();i++)
        for(int j=0;j<Y.size();j++)
        if(X[i]==Y[j])
        {
            a[i+1][j+1]=a[i][j]+1;
            kq=max(kq,a[i+1][j+1]);
        }
        else a[i+1][j+1]=0;
    cout<<kq;
    return 0;
}

