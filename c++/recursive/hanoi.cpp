#include <iostream>
#include <cstdio>
using namespace std;

int c = 0;

void hanoi_1(int n, int start, int end, int sub)
{
	if(n > 1)
		hanoi_1(n - 1, start, sub, end);
	printf("%d %d\n",start,end);
	if(n > 1)
		hanoi_1(n - 1, sub, end, start);
}


void hanoi(int n, int start, int end, int sub)
{
	if(n > 1)
		hanoi(n - 1, start, sub, end);
	c++;
	if(n > 1)
		hanoi(n - 1, sub, end, start);
}

int main(void)
{
	int n;
	scanf("%d",&n);

	hanoi(n,1,3,2);
	printf("%d\n",c);
	hanoi_1(n,1,3,2);
	return (0);
}
