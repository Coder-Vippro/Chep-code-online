#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    int l,i,j,k;
    cin>>x;
    l=x.size();
    for (i=0;i<l-1;i++)
    {
        j=i+1;
    while (j<l)
    if (x[i]==x[j])
        {for (k=j;k<l-1;k++) x[k]=x[k+1];
        l=l-1;
        }
        else j=j+1;
    }
cout<<x;
return 0;
}
