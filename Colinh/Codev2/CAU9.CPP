#include <bits/stdc++.h>

using namespace std;
#define st string
st dl;
int dem=0;
int main()
{
    cin>>dl;
    for(int i=0;i<dl.size();i++)
    {
        if(dl[i]>=65&&dl[i]<=122)
        {
            dem++;
        }

    }
    cout<<dem;
    return 0;
}
