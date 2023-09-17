#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	vector<vector <int> >map(n, vector<int> (m));

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> map[i][j];
	int dp[4][501][501] = {0,};
	int c[501][501] = {0,};
	int mo[4] = {-1,1,0,0};
	int ve[4] = {0,0,-1,1};
	dp[0][0] = 1;
	for(int i = 0; i < 4; i++)
	cout << dp[n - 1][m - 1] << '\n';
	return (0);
}
