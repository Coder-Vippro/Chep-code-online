#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long thetich;
    float tien;
    cin>>thetich;
    if(thetich<=5)
    {
        tien=thetich*6500;
    }
    if(thetich<=15&&thetich>=6)

    {
        tien=thetich*7800;
    }
     if(thetich<=25&&thetich>=16)
    {
        tien=thetich*9200;
    }
    if(thetich>=26)
    {
        tien=thetich*10300;
    }
    cout<<fixed<<setprecision(2)<<tien<<'\n';
    cout<<fixed<<setprecision(2)<<(tien*12)/100<<'\n';
    cout<<fixed<<setprecision(2)<<tien+(tien*12)/100;
    return 0;
}
