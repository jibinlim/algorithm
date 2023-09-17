#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	char x[51];
	scanf("%s",x);
	for(int i = 0; i < n - 1; i++)
	{
		char s[51];
		scanf("%s",s);

		int j = 0;
		while(x[j])
		{
			if(s[j] != x[j])
			{
				x[j] = '?';
			}
			j++;
		}
	}
	printf("%s",x);
	return (0);
}
