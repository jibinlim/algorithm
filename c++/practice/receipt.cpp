#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int total;
	cin >> total;
	int sum = 0;
	for(int i = 0; i < 9; i++)
	{
		int in;
		cin >> in;
		sum += in;
	}
	cout << total - sum << '\n';
	return (0);
}
