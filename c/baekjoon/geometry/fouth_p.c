#include <stdio.h>

int main(void)
{
	int x[3];
	int y[3];
	int a;
	int b;

	for(int i = 0; i < 3; i++)
		scanf("%d %d", x+i, y+i);
	if(x[0] == x[1])
		a = x[2];
	else if(x[0] == x[2])
		a = x[1];
	else if(x[1] == x[2])
		a = x[0];
	if(y[0] == y[1])
		b = y[2];
	else if (y[0] == y[2])
		b = y[1];
	else if (y[1] == y[2])
		b = y[0];

	printf("%d %d",a,b);
	return (0);
}
