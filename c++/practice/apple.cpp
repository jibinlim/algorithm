#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	int ans = 0;
	int a1,a2;
	for(int i = 0; i < n; i++)
	{
		cin >> a1 >> a2;
		ans += a2 % a1;
	}
	cout << ans << '\n';
	return (0);
}
