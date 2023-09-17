#include <iostream>
int n;
int queen[16] = {0,};
int c = 0;
using namespace std;

int possible(int row, int col)
{
	for(int i = 0; i < col; i++)
		if(queen[i] == row || col - i == queen[i] - row || col - i == row - queen[i])
			return 0;
	return 1;
}

void dfs(int row, int col)
{
	queen[col] = row;
	if(col == n - 1)
	{
		c++;
		return ;
	}
	for(int i = 0; i < n; i++)
		if(possible(i,col + 1) == 1)
			dfs(i, col + 1);
}

int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
		dfs(i,0);
	cout << c <<'\n';
	return (0);
}
