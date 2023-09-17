#include <stdio.h>
#include <stdlib.h>

int m,n;
int **box;

struct p{
	int x;
	int y;
	int c;
};

struct p* queue;


int main(void)
{
	scanf("%d %d",&m,&n);
	queue = (struct p*) malloc (sizeof(struct p) * n * m);
	box = (int **) malloc (sizeof(int *) * n);
	for(int i = 0; i < n; i++)
	{
		box[i] = (int *) malloc (sizeof(int) * m);
		for(int j = 0; j < m; j++)
			scanf("%d",&box[i][j]);
	}
	int front = 0;
	int rear = 0;
	int mo[4] = {0,0,-1,1};
	int ve[4] = {-1,1,0,0};

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(box[i][j] == 1)
			{
				queue[rear].x = i;
				queue[rear].y = j;
				queue[rear].c = 0;
				rear++;
			}
		}
	}
	int x;
	int y;
	int c;
	while(front < rear)
	{
		x = queue[front].x;
		y = queue[front].y;
		c = queue[front].c;
		front++;
		for(int i = 0; i < 4; i++)
		{
			int dx = x + mo[i];
			int dy = y + ve[i];

			if(dx < 0 || dy < 0 || dx > n - 1 || dy > m - 1)
				continue;
			if(box[dx][dy] == 0)
			{
				queue[rear].x = dx;
				queue[rear].y = dy;
				queue[rear].c = c + 1;
				rear++;
				box[dx][dy] = 1;
			}
		}
	}
	int flag = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(box[i][j] == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			break;
	}
	if(flag == 1)
		printf("-1\n");
	else
		printf("%d\n",c);
	for(int i = 0; i < n; i++)
		free(box[i]);
	free(box);
	free(queue);
	return (0);
}
