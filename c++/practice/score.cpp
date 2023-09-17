#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int sum = 0;

	int input;
	int x = 1;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		if(input == 0)
			x = 1;
		else
		{
			sum += x;
			x++;
		}
	}
	cout << sum << '\n';
	return (0);
}
