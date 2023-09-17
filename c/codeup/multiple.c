#include <stdio.h>

int main(void)
{
	unsigned int n;
	scanf("%d",&n);


	unsigned long long queue[1000001];

	const unsigned long long a = 11111111111111111111;
	int front = 0,rear = 0;
	unsigned long long x;
	queue[rear] = 10;
	rear++;
	queue[rear] = 11;
	rear++;
	while(1)
	{
		x = queue[front];
		if(x > a)
		{
			x = 0;
			break;
		}
		front++;
		if(x % n == 0)
			break;
		if(x > a)
			continue;
		if(x * 10 > a)
			continue;
		if(x * 10 + 1 > a)
			continue;
		if(x * 10 < a)
		{
			queue[rear] = x * 10;
			rear++;
		}
		if((x * 10) + 1 < a)
		{
			queue[rear] = (x * 10) + 1;
			rear++;
		}
		if(rear > 100000)
			rear = 0;
		if(front > 100000)
			front = 0;
	}
	if(n == 1)
		x = 1;
	printf("%lld\n",x);
	return (0);
}

