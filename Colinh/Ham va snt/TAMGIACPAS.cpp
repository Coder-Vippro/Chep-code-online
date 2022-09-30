#include <bits/stdc++.h>
using namespace std;
long long C[16][16];
int kq=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    C[0][0]=C[1][0]=C[1][1]=1;
    for(int i=2;i<=15;i++)
    {
        C[i][0]=C[i][i]=1;
    }
    for(int i=2;i<=15;i++)
        for(int j=1;j<=i-1;j++)
            C[i][j]=C[i-1][j-1]+C[i-1][j];
    for(int z=2;z<=3;z++)
        for(int y=1;y<=2;y++)
            for(int x=1;x<=2;x++)
                if(x+y+z==5)
                    {
                        kq+=C[15][z]*C[10][y]*C[5][x];
                    }
    cout<<kq;
}