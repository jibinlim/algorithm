#include <stdio.h>

struct p{
	int a;
	int b;
	int c;
};

int main(void)
{
	int n,m,x,y;
	scanf("%d %d",&n,&m);
	scanf("%d %d",&x,&y);

	int mo[8] = {-2,-2,-1,-1,1,1,2,2};
	int ve[8] = {-1,1,-2,2,-2,2,-1,1};

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			int visit[1000][1000] = {0,};
			int a,b,c;
			struct p queue[100000];
			int front = 0,rear = 1;
			queue[0].a = x - 1;
			queue[0].b = y - 1;
			queue[0].c = 0;
			while(front < rear)
			{
				a = queue[front].a;
				b = queue[front].b;
				c = queue[front].c;
				if(a == i && b == j)
					break;
				front++;
				for(int k = 0; k < 8; k++)
				{
					int dx = a + mo[k];
					int dy = b + ve[k];

					if(dx < 0 || dy < 0 || dx > n - 1 || dy > m - 1)
						continue;
					if(visit[dx][dy] == 0)
					{
						queue[rear].a = dx;
						queue[rear].b = dy;
						queue[rear].c = c + 1;
						rear++;
						visit[dx][dy] = 1;
					}
				}
			}
			if(front == rear)
				c = -1;
			if(i == x - 1 && j == y - 1)
				c = 0;
			if(j == 0)
					printf("%d",c);
			else
					printf(" %d",c);
		}
		printf("\n");
	}
	return (0);
}
