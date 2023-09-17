#include <stdio.h>

void print_graph(int *ps, int size)
{
	int x;
	x = size / 5;
	printf("(%d)",size);
	for(int i = 0; i < x; i++)
	{
		printf("*");
	}
	printf("\n");
}

int main()
{
	int score[5] = {72, 88,95,64,100};

	for (int i = 0 ; i < 5 ; i++)
	{
		print_graph(score,score[i]);
	}
	return (0);
}
