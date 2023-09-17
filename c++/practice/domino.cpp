#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int ans = 0;
	for(int i = 0; i <= n; i++)
		for(int j = i; j <= n; j++)
			ans += i + j;

	cout << ans << '\n';
	return (0);
}
