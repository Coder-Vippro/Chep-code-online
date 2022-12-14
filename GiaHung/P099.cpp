#include <bits/stdc++.h>
using namespace std;
void HD(int &a, int &b){
    int tmp = a;a=b;b=tmp;}
int main(){
   int m,n;int B2[m][n]= { 0 },B_dem = 0,B_rong = 0,B_cao = 0,rong = m,cao = n,A1dem,A2[m][n],A1[m * n];
    cin>>m>>n;
    for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin>>A2[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            A1[A1dem] = A2[i][j];A1dem++;}
    for (int i = 0; i < m * n; i++)
        for (int j = i; j < m *n; j++)
            if (A1[i]>A1[j])HD(A1[i],A1[j]);
    while(B_rong<rong&&B_cao<cao){
        for (int i=B_cao;i<cao;i++){
            B2[B_rong][i]=A1[B_dem];B_dem++;}
        B_rong++;
        for (int i=B_rong;i<rong; i++){
            B2[i][cao-1]=A1[B_dem];B_dem++;}
        cao--;
        if (B_rong<rong){
            for (int i=cao-1;i>=B_cao;i--){
                B2[rong-1][i]=A1[B_dem];B_dem++;}
            rong--;}
        if (B_cao < cao){
            for (int i=rong-1;i>=B_rong;i--){
                B2[i][B_cao]=A1[B_dem];B_dem++;}
            B_cao++;}
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)cout << B2[i][j] << " ";
        cout << endl;
    }

}

