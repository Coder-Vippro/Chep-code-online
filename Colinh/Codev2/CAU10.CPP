#include <bits/stdc++.h>

using namespace std;
string dl;

int main()
{
    cin>>dl;
    for(int i=0;i<dl.size();i++)
    {
       if(dl[i]>='A'&&dl[i]<='Z')
        {
            dl[i]+=32;
             if(dl[i]>='a'&&dl[i]<='z')
            {dl[i]-=32;}


    }
    }
cout<<dl;
    return 0;
}
