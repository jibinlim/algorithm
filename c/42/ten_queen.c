#include <unistd.h>

void put_nbr(int nb)
{
	char c;

	c = nb + '0';
	write(1, &c, 1);
}

void put_arr(int *queen)
{
	int i;

	i = 0;
	while(i < 10)
	{
		put_nbr(queen[i]);
		i++;
	}
	write(1, "\n", 1);
}


int available(int queen[10], int col, int row)
{
	int i = 0;

	while (i < col)
	{
		if (queen[i] == row || queen[i] - row == col - i
				|| queen[i] - row == i - col)
			return(0);
		i++;
	}
	return (1);
}

void dfs(int col, int queen[10], int* count)
{
	int row;

	row = 0;
	if (col == 10)
	{
		put_arr(queen);
		(*count)++;
		return ;
	}

	while (row < 10)
	{
		if (available(queen, col, row))
		{
			queen[col] = row;
			dfs(col + 1, queen, count);
		}
		row++;
	}
}

int ft_ten_queen_puzzle(void)
{
	int queen[10];
	int count = 0;
	
	dfs(0, queen, &count);
	return (count);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_ten_queen_puzzle());
}
