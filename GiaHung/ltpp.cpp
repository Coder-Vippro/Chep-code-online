#include <bits/stdc++.h>
using namespace std;
int maxx=0;
int main()
{
    int k;
    cin>>k;
    string a;
    int dem=0;
    while(k--)
    {
        cin>>a;
        for(int i=1;i<a.size();i++)//duyet tu dau xau den cuoi xau
        {
            if(a[i]==a[i+1])dem++;//dem so ky tu trung nhau
            else 
            {
                if(dem>maxx)//so sanh voi maxx tim xau con dai nhat
                maxx=dem;
            }
           
        }
            cout<<maxx<<endl;
            dem=0;//reset dem
            maxx=0;//reset maxx
    }
} 

