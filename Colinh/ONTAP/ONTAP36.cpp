#include <bits/stdc++.h>

using namespace std;

int main()
{
    int giay,gio,phut,giay1;
    cin>>giay;
    gio=giay/3600;
    phut=(giay-(gio*3600))/60;
    giay1=giay-(gio*3600+phut*60);
    cout<<gio<<":"<<phut<<":"<<giay1;
    return 0;
}
