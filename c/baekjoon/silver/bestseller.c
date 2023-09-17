#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book{
	char book[51];
	int count;
};

int cmp(const void *a, const void *b)
{
	struct book *x = (struct book *)a;
	struct book *y = (struct book *)b;
	return (strcmp(x -> book, y -> book));
}

int main(void)
{
	int n;
	scanf("%d",&n);

	int j = 0;
	struct book *x;
	x = (struct book *)malloc (sizeof(struct book) * n);
	for(int i = 0; i < n; i++)
	{
		char bk[51];
		scanf("%s",bk);
		int f = 0;
		for(int k = 0; k < j; k++)
		{
			if(strcmp(x[k].book,bk) == 0)
			{
				x[k].count++;
				f = 1;
				break;
			}
		}
		if(f == 0)
		{
			x[j].count = 0;
			strcpy(x[j].book,bk);
			x[j].count++;
			j++;
		}
	}
	int max = 0;
	int max_index = 0;
	qsort(x,j,sizeof(struct book),cmp);
	for(int i = 0; i < j; i++)
	{
		if(max < x[i].count)
		{
			max = x[i].count;
			max_index = i;
		}
	}
	printf("%s\n",x[max_index].book);
	free(x);
	return (0);
}
