#include <iostream>
#include <vector>
using namespace std;

int mn(int a, int b)
{
	if(a < b)
		return a;
	return b;
}

int main(void)
{
	int n;
	cin >> n;

	vector <vector <int> > street(n,vector <int> (3));
	vector <vector <int> > dp(n, vector <int> (3));

	for(int i = 0; i < n; i++)
		for(int j = 0; j < 3; j++)
			cin >> street[i][j];

	dp[0][0] = street[0][0];
	dp[0][1] = street[0][1];
	dp[0][2] = street[0][2];

	for(int i = 1; i < n; i++)
	{
				dp[i][0] = mn(dp[i - 1][1], dp[i - 1][2]) + street[i][0];
				dp[i][1] = mn(dp[i - 1][0], dp[i - 1][2]) + street[i][1];
				dp[i][2] = mn(dp[i - 1][0], dp[i - 1][1]) + street[i][2];
		}
	int min = 2147483647;
	for(int i = 0; i < 3; i++)
		if(min > dp[n - 1][i])
			min = dp[n - 1][i];

	cout << min << '\n';
	return (0);
}
