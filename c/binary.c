#include <stdio.h>

int main(void)
{
	int n[10] ={1,2,3,4,5,6,7,8,9,10};

	int mid,low = 0,high = 9;

	int x;
	scanf("%d",&x);
	while(low <= high)
	{
		mid = low + (high - low) / 2;

		if(n[mid] == x)
			break;
		if(n[mid] < x)
			low = mid + 1;
		else if(n[mid] > x)
			high = mid - 1;
	}
	printf("%d\n",mid);
	return (0);
}
