#include <iostream>
#include <vector>
using namespace std;

int mx(int a, int b)
{
	if(a > b)
		return a;

	return b;
}
int main(void)
{
	int n;
	cin >> n;
	
	vector <vector <int> > tri(n,vector<int> (n));
	vector <vector <int> > dp(n,vector<int> (n));

	for(int i = 0; i < n; i++)
		for(int j = 0; j <= i; j++)
			cin >> tri[i][j];

	dp[0][0] = tri[0][0];

	for(int i = 1; i < n; i++)
		for(int j = 0; j <= i; j++)
		{
			if(j == 0)
				dp[i][j] = dp[i - 1][j] + tri[i][j];
			else
				dp[i][j] = mx(dp[i - 1][j - 1],dp[i - 1][j]) + tri[i][j];
		}

	int m = 0;
	for(int i = 0; i < n; i++)
		if(dp[n - 1][i] > m)
			m = dp[n - 1][i];

	cout << m << '\n';
	return (0);
}
