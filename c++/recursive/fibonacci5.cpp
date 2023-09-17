#include <iostream>
using namespace std;

int fibo(int n)
{
	if(n < 2)
		return n;
	return fibo(n - 2) + fibo(n - 1);
}

int main(void)
{
	int n;
	cin >> n;

	cout << fibo(n) << "\n";
	return (0);
}
