#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n,k;
	cin >> n >> k;
	int h = n % k;
	cout << n / k+h;
}