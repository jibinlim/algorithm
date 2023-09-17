#include <stdio.h>

struct p{
	int t;
	int h;
};

int main(void)
{
	int a,b;
	int visit[41] = {0,};
	scanf("%d %d",&a,&b);
	struct p queue[41];
	int t,h;
	int front = 0, rear = 0;
	visit[a] = 1;
	queue[rear].t = a;
	queue[rear].h = 0;
	rear++;

	int x[3] = {1,5,10};

	while(front < rear)
	{
		t = queue[front].t;
		h = queue[front].h;
		front++;
		if(t == b)
			break;
		for(int i = 0; i < 3; i++)
		{
			if(t + x[i] <= 40 && visit[t + x[i]] == 0)
			{
				queue[rear].t = t + x[i];
				queue[rear].h = h + 1;
				rear++;
				visit[t + x[i]] = 1;
			}
			if(t - x[i] >= 0 && visit[t - x[i]] == 0)
			{
				queue[rear].t = t - x[i];
				queue[rear].h = h + 1;
				rear++;
				visit[t - x[i]] = 1;
			}
		}
	}
	printf("%d\n",h);
	return (0);
}
