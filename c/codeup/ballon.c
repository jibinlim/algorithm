#include <stdio.h>

int count[10] = {0,};
int visit[20][20];
int c = 0;
int n,m;
int map[20][20];

void dfs(int x, int y,int k)
{
	visit[x][y] = 1;
	c++;
	int mo[4] = {0,0,-1,1};
	int ve[4] = {-1,1,0,0};

	for(int i = 0; i < 4; i++)
	{
		int dx = x + mo[i];
		int dy = y + ve[i];

		if(dx < 0 || dy < 0 || dx > m - 1 || dy > n - 1)
			continue;
		if(visit[dx][dy] == 0 && map[dx][dy] == k)
			dfs(dx,dy,k);
	}
}


int main(void)
{
	scanf("%d %d",&m,&n);


	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d",&map[i][j]);

	for(int k = 0; k <= 9; k++)
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				if(visit[i][j] == 0 && map[i][j] == k)
				{
					c = 0;
					dfs(i,j,k);
					if(c > count[k])
						count[k] = c;
				}


	for(int i = 0; i <= 9; i++)
	{
		if(count[i] != 0)
			printf("%d %d\n",i,count[i]);
	}
	return (0);
}
