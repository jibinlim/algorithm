#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		sum += a;
	}
	sum -= (n - 1);
	cout << sum << '\n';
	return (0);
}
