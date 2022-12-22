#include <bits/stdc++.h>

using namespace std;
string a;
int main()
{
    cin>>a;
    sort(a.begin(),a.end());
    int dem;
    for(unsigned int i=0;i<a.size();i++)
    {
        dem=1;

    for(unsigned int j=i+1;j<=a.size();j++)
    {
        if (a[i]==a[j])
         dem++;
        else
        {
            cout <<a[i]<<" "<<dem<<endl;
            i=i+1;
        }

    }
    }
    return 0;
}
