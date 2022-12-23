#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Cho 4 số A, B, C và D. Nếu B lớn hơn C và D lớn hơn A và tổng của C và D lớn hơn tổng
//của A và B và A chẵn thì in ra YES, còn nếu không in ra NO.
    freopen("ConditionEasy.inp","r",stdin);
    freopen("ConditionEasy.out","w",stdout);
  int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>c && d>a && c+d>a+b &&a%2==0) cout<<"YES";
    else cout<<"NO";

    return 0;
}
