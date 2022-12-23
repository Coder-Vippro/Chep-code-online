#include <bits/stdc++.h>

using namespace std;

bool sodep(int n)//bruh
{
   
    int s = 0;
    while (n> 0)
    {
        s = s + (n%10)*(n%10);
        n = n / 10;
    }
    int dem = 0;
    for (int i = 1; i <= s; i++)
        if (s % i == 0) dem++;
    if (dem == 2) return true;
    else return false;
}
int main()
{
   freopen("BEAUTY2.INP", "r", stdin);
   freopen("BEAUTY2.OUT", "w", stdout);
    int d = 0, so = 0;
    int n;
    
    while (cin>>n)
    {
        while (d < n)
        {
            so++;
            if (sodep(so) == true)
                d++;
            
        }  
        cout << so<<endl;
        so = 0;
        d = 0;
    }

    
    return 0;
}



