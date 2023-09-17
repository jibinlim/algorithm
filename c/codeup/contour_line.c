#include <stdio.h>

int map[101][101] = {0,};
int n;

struct p{
	int x;
	int y;
	int num;
};

int main(void)
{
	int x,y;
	scanf("%d", &n);
	scanf("%d %d",&x,&y);
	struct p queue[10001] = {0,};
	int front = 0,rear = 0;
	int num = 1;
	int mo[4] = {0,0,-1,1};
	int ve[4] = {-1,1,0,0};
	map[x - 1][y - 1] = 1;
	queue[rear].x = x - 1;
	queue[rear].y = y - 1;
	queue[rear].num = 1;
	rear++;

	while(front < rear)
	{
		x = queue[front].x;
		y = queue[front].y;
		num = queue[front].num;
		front++;
		for(int i = 0; i < 4; i++)
		{
			int dx = x + mo[i];
			int dy = y + ve[i];

			if(dx < 0 || dy < 0 || dx > n - 1 || dy > n - 1)
				continue;
			if(map[dx][dy] == 0)
			{
				queue[rear].x = dx;
				queue[rear].y = dy;
				queue[rear].num = num + 1;
				map[dx][dy] = num + 1;
				rear++;
			}
		}
	}


	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%2d ",map[i][j]);
		printf("\n");
	}
	return (0);
}
