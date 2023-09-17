#include <stdio.h>

int main(void)
{
	int l,p;
	scanf("%d %d",&l,&p);

	l *= p;
	int news[5];
	for(int i = 0; i < 5; i++)
		scanf("%d",news+i);
	for(int i = 0; i < 5; i++)
		printf("%d ",news[i] - l);
	return (0);
}
