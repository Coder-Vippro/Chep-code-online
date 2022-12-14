#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    if(n==2)
    return true;
    if(n<2)
    return false;
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else return false;
}
int main() 
{
	int n;
	cin >> n;
	int dem = 0;
	int thuong;
	if (ktnt(n) == true)
	{
		cout << "YES";
	}
	else 
	{
		for (int i = 1; i <= n; i++)
			if (n % i == 0 && ktnt(i) == true)
			{
				cout << i;
				return 0;
		   }
	}
	
	
	
}