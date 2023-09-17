#include <iostream>
#include <cstdlib>
using namespace std;
int sdoku[9][9];

int possible(int x, int y, int k)
{
	for(int i = 0; i < 9; i++)
		if(sdoku[i][y] == k)
			return 0;

	for(int j = 0; j < 9; j++)
		if(sdoku[x][j] == k)
			return 0;
	for(int i = (x / 3) * 3 ; i < (x / 3) * 3 + 3; i++)
		for(int j = (y / 3) * 3; j < (y / 3) * 3 + 3; j++)
			if(sdoku[i][j] == k)
				return 0;
	return 1;
}

void dfs(int x, int y)
{
	if(y == 9)
	{
		x++;
		y = 0;
	}
	if(x == 9)
	{
		for(int i = 0; i < 9; i++)
		{
			for(int j = 0; j < 9; j++)
				cout << sdoku[i][j] << ' ';
			cout << '\n';
		}
		exit(0);
	}
	if(sdoku[x][y] != 0)
		dfs(x,y + 1);
	else
	{
		for(int k = 1; k <= 9; k++)
		{
			if(possible(x,y,k) == 1)
			{
				sdoku[x][y] = k;
				dfs(x, y + 1);
				sdoku[x][y] = 0;
			}
		}
	}
}

int main(void)
{
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++)
			cin >> sdoku[i][j];

	dfs(0,0);
	return 0;
}
