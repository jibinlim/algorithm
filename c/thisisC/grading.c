#include <stdio.h>

int main()
{
	int a[5];
	int x = 0;
	int y = 0;
	printf("5명 심사위원의 점수 입력 :");
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	int max = a[0];
	int min = a[0];
	int b[3];
	int j = 0;

	for(int i = 0 ; i < 5; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			x = i;
		}
		if (min > a[i])
		{
			min = a[i];
			y = i;
		}
	}
	for (int i = 0; i < 5 ; i++)
	{
		if(i != x && i != y)
		{
			b[j] = a[i];
			j++;
		}
	}
	printf("유효점수 :");
	printf("%3d %3d %3d\n",b[0],b[1],b[2]);
	int sum = 0;
	for (int i = 0; i < 3 ; i++)
	{
		sum += b[i];
	}
	float avg = 0.0;
	avg =(float) sum / 3;
	printf("평균 : %.1lf",avg);
	return (0);
}
