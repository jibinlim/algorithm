#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	int n,b;
	cin >> n >> b;
	string x;

	while(n > 0)
	{
		if(n % b < 10)
			x.push_back(n % b + '0');
		else
			x.push_back(n % b - 10 + 'A');
		n /= b;
	}
	int f = 0;
	int r = x.length() - 1;
	while(f < r)
	{
		char temp = x[f];
		x[f] = x[r];
		x[r] = temp;
		f++;
		r--;
	}
	cout << x;
	return (0);
}
