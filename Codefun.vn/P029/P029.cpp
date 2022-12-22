#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
	{
		cout << 0;
		return 0;
	}
	else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
	{
		cout << 2;
		return 0;
	}
	else cout << 1;
	
}