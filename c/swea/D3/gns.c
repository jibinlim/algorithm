#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *x,char *y)
{
	char z[10];
	strcpy(z,x);
	strcpy(x,y);
	strcpy(y,z);
}

int main(void)
{
	char num[11][4] ={"ZRO","ONE","TWO","THR","FOR","FIV","SIX","SVN","EGT","NIN"};

	int t;
	scanf("%d",&t);
	for(int zz = 1; zz <= t; zz++)
	{
		char plo[3];
		int p;
		scanf("%s %d",plo,&p);

		char word[2501][4];

		for(int i = 0; i < p / 3; i++)
		{
			scanf("%s",word[i]);
		}

		for(int i = 0; i < p / 3; i++)
		{
			for(int j = i + 1; j < p / 3; j++)
			{
				int x,y;
				for(int k = 0; k < 10; k++)
					if(strcmp(word[i],num[k]) == 0)
					{
						x = k;
						break;
					}
				for(int k = 0; k < 10; k++)
					if(strcmp(word[j],num[k]) == 0)
					{
						y = k;
						break;
					}
				if(x > y)
					swap(word[i],word[j]);
			}
		}
		printf("#%d\n",zz);
		for(int i = 0; i < p / 3; i++)
		{
			printf("%s ",word[i]);
		}
	}
	return (0);
}
