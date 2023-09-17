#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	for(int z = 0; z < 10; z++)
	{
		int prob;
		scanf("%d",&prob);
		char search[11];
		char sen[1001];

		scanf("%s",search);
		scanf("%s",sen);
		int i = 0;
		int j = 0;
		int count = 0;
		while(sen[i])
		{
			while(sen[i] == search[j] && sen[i] && search[j])
			{
				i++;
				j++;
			}
			if(search[j] == '\0')
				count++;
			if(sen[i] == '\0')
				break;
			j = 0;
			if(sen[i] != search[j])
				i++;
		}
		printf("#%d %d\n",z + 1, count);
	}
	return (0);
}
