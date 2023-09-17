#include <stdio.h>

int gcd(int a, int b)
{
	if(a % b == 0)
		return b;
	else
		return gcd(b,a % b);
}

int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int g;

	g = gcd(a,b);
	g = gcd(g,c);

	printf("%d\n",g);
	return (0);
}
