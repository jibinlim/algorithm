#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
	char *x = *(char **)a;
	char *y = *(char **)b;
	return strcmp(y,x);
}


int main(void)
{
	int n;
	scanf("%d",&n);

	char name[6];
	char inout[6];
	char **com = (char **) malloc (sizeof(char *) * (n + 1));
	int j = 0;
	for(int i = 0; i < n; i++)
	{
		com[i] = (char *)malloc (sizeof(char *) * 6);
		scanf("%s",name);
		scanf("%s",inout);
		if(strcmp(inout,"enter") == 0)
		{
			strcpy(com[j],name);
			j++;
		}
		else if(strcmp(inout,"leave") == 0)
		{
			for(int k = 0; k < j; k++)
			{
				if(com[k][0] == '\0')
					continue;
				if(strcmp(name,com[k]) == 0)
				{
					com[k][0] = '\0';
					break;
				}
			}
		}
	}
	qsort(com,j,sizeof(char *),cmp);
	for(int i = 0; i < j; i++)
	{
		if(com[i][0] == '\0')
			continue;
		printf("%s\n",com[i]);
	}
	for(int i = 0; i < n; i++)
		free(com[i]);
	free(com);
	return (0);
}
