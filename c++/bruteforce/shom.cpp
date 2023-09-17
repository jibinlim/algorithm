#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int x = 666;
	int x_temp = x;
	while(n > 0)
	{
		int count = 0;
		x = x_temp;
		while(x > 0)
		{
			if(x % 10 == 6)
				count++;
			else
				count = 0;
			if(count == 3)
				break;
			x /= 10;
		}
		if(count == 3)
			n--;
		if(n == 0)
			break;
		x_temp++;
	}
	cout << x_temp << '\n';
	return (0);
}

