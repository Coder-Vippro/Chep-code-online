#include <bits/stdc++.h>

using namespace std;

int main()
{
    string dl;int dl1=0;
    cin>>dl;
    for(int i=0;i<dl.size();i++)
    {
        if(dl[i]>=48&&dl[i]<=57)
            dl1+=dl[i];

    }
    if(dl1%3==0)cout<<"YES"; else cout<<"NO";
    return 0;
}

