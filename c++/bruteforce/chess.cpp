#include <iostream>
using namespace std;


int main(void)
{
	int n,m;
	char board[2][9] = {"BWBWBWBW","WBWBWBWB"};
	cin >> n >> m;
	char x[51][51];

	for(int i = 0; i < n; i++)
		scanf("%s",x[i]);

	int count;
	int min = 2147483647;

	int c = 0;
	while(c < 2)
	{
		for(int i = 0; i <= n - 8; i++)
		{
			for(int j = 0; j <= m - 8; j++)
			{
				count = 0;
				int k;
				if(c == 0)
				{
					k = 0;
					for(int t = 0; t < 8; t++)
					{
						if(k == 0)
							k = 1;
						else
							k = 0;
						for(int y = 0; y < 8; y++)
						{
							if(board[k][y] != x[t + i][y + j])
								count++;
						}
					}
				}
				else
				{
					k = 1;
					for(int t = 0; t < 8; t++)
					{
						if(k == 0)
							k = 1;
						else
							k = 0;
						for(int y = 0; y < 8; y++)
						{
							if(board[k][y] != x[t + i][y + j])
								count++;
						}
					}
				}
				if(count < min)
					min = count;
			}
		}
		c++;
	}

	cout << min << '\n';
	return (0);
}
