#include <iostream>
#include <vector>
using namespace std;

int co = 1;

int fibo(int n)
{
	if(n <= 2)
		return 1;
	co++;
	return fibo(n - 2) + fibo(n - 1);
}

int main(void)
{
	int n;
	cin >> n;
	int c = 0;
	for(int i = 3; i <= n; i++)
		c++;
	int x = fibo(n);
	cout << co << ' ' << c;
	return (0);
}
