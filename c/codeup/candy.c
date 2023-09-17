#include <stdio.h>

int candy[7][7];
int c = 0;
int visit[7][7] = {0,};

void dfs(int x,int y, int k)
{
	visit[x][y] = 1;
	c++;
	int mo[4] = {0,0,-1,1};
	int ve[4] = {-1,1,0,0};

	for(int i = 0; i < 4; i++)
	{
		int dx = x + mo[i];
		int dy = y + ve[i];

		if(dx < 0 || dy < 0 || dx >= 7 || dy >= 7)
			continue;
		if(visit[dx][dy] == 0 && candy[dx][dy] == k)
			dfs(dx,dy,k);
	}
}


int main(void)
{
	for(int i = 0; i < 7; i++)
		for(int j = 0; j < 7; j++)
			scanf("%d",&candy[i][j]);

	int count = 0;

	for(int k = 1; k <= 5; k++)
		for(int i = 0; i < 7; i++)
			for(int j = 0; j < 7; j++)
				if(visit[i][j] == 0 && candy[i][j] == k)
				{
					c = 0;
					dfs(i,j,k);
					if(c >= 3)
						count++;
				}
	printf("%d\n",count);
	return (0);
}
