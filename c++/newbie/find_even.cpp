#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;

	while(t > 0)
	{
		int sum = 0;
		int mn = 101;
		int input;
		for(int i = 0; i < 7; i++)
		{
			cin >> input;
			if(input % 2 == 1)
				continue;
			sum += input;
			if(mn > input)
				mn = input;
		}
		cout << sum << ' ' << mn << '\n';
		t--;
	}
	return (0);
}
