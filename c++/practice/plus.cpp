#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int t;
	cin >> t;

	while(t > 0)
	{
		int n;
		cin >> n;
		int sum = 0;
		while(n > 0)
		{
			int input;
			cin >> input;
			sum += input;
			n--;
		}
		cout << sum << '\n';
		t--;
	}
	return (0);
}
