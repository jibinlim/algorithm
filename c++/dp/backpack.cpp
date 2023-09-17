#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
	if(a > b)
		return a;
	return b;
}

int main(void)
{
	int n,k;
	cin >> n >> k;

	vector <int> w(n + 1);
	vector <int> v(n + 1);

	for(int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];
	vector <vector <int> > dp(n + 1, vector<int> (100001));
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= k; j++)
		{
			if(w[i] <= j)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			else
				dp[i][j] = dp[i - 1][j];

		}
	cout << dp[n][k] << '\n';
	return (0);
}
