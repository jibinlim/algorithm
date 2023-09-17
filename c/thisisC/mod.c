#include <stdio.h>

void func(int *mod, int *rem)
{
	int n;
	printf("양수 입력:");
	scanf("%d",&n);
	*mod = n / 4;
	*rem = n % 4;
}



int main()
{
	int mod, rem;
	func(&mod, &rem);
	printf("몫: %d, 나머지 : %d", mod, rem);

	return (0);
}
