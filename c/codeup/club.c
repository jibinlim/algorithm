#include <stdio.h>

char o_x[8];
int n;
char p[3] = "OX";

void dfs(int x, char s)
{
	o_x[x - 1] = s;
	if(x == n)
	{
		for(int i = 0; i < n; i++)
			printf("%c",o_x[i]);
		printf("\n");
		return ;
	}
	else
	{
		for(int i = 0; i < 2; i++)
			dfs(x + 1,p[i]);
	}
}

int main(void)
{
	scanf("%d",&n);


	for(int i = 0; i < 2; i++)
		dfs(1,p[i]);
	return (0);
}
