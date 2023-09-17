#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	if(*(int *)a > *(int *)b)
		return 1;
	else if(*(int *)a < *(int *)b)
		return -1;
	else
		return 0;
}

int main(void)
{
	int a[5];

	for(int i = 0 ; i < 5; i++)
		scanf("%d",&a[i]);

	qsort(a,5,sizeof(int),cmp);

	printf("%d",a[2]);
	return (0);
}
