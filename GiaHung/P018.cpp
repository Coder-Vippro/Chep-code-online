#include <iostream>
using namespace std;
int a;
int A[100000001];
int main() 
{
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> A[i];
	}
	cout << A[1] << endl;
	cout << A[a];
	return 0;
}