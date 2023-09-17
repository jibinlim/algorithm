#include <stdio.h>

int main(void)
{
	int o_m = 0;
	int e_m = 0;
	int n;

	for(int i = 0 ; i < 7; i++)
	{
		scanf("%d",&n);
		if(n % 2 == 0)
			if(n > e_m)
				e_m = n;
		if(n % 2 == 1)
			if(n > o_m)
				o_m = n;
	}
	printf("%d\n",o_m + e_m);
	return (0);
}
