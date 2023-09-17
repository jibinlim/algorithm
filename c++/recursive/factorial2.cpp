#include <iostream>
using namespace std;

long long fac(int n)
{
	if(n < 2)
		return 1;
	else
		return n * fac(n - 1);
}

int main(void)
{
	int n;
	cin >> n;

	cout << fac(n) << "\n";
	return (0);
}
