#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,m,k;
	cin >> n >> m >> k;
	vector<vector<char> >board (n, vector<char>(m));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> board[i][j];
	return (0);
}
