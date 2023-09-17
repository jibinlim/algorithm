#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	int co[1001] = {0,};
	int sum = 0;
	int input;
	int ans = 0;
	int c = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		sum += input;
		if(sum % m == 0)
			ans++;
		co[sum % m]++;
	}
	for(int i = 0; i < m; i++)
	{
		ans += co[i] * (co[i] - 1) / 2;
	}
	cout << ans <<'\n';
	return (0);
}
