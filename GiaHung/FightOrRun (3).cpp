#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ax,bx,cx,ay,by,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
          if(ax==bx && ay==cy) cout<<cx<<" "<<by;
     else if(ay==by && ax==cx) cout<<bx<<" "<<cy;
     else if(by==ay && bx==cx) cout<<ax<<" "<<cy;
     else if(by==cy && bx==ax) cout<<cx<<" "<<ay;
     else if(cy==by && cx==ax) cout<<bx<<" "<<ay;
     else if(cy==ay && cx==bx) cout<<cx<<" "<<by;
    return 0;
}
