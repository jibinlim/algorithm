#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	string a;
	string b;
	cin >> a;
	cin >> b;
	int a_len = a.length();
	int b_len = b.length();
	int dp[1001][1001] = {0,};
	for(int i = 1; i <= a_len; i++)
		for(int j = 1; j <= b_len; j++)
		{
			if(a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
		}
	cout << dp[a_len][b_len] << '\n';
	return (0);
}
