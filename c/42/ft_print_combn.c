#include <unistd.h>
#include <stdio.h>

void dfs(int n, char c, char s[11],int count)
{
	s[count] = c;
	if(count + 1 == n)
	{
		int i = 0;
		while(i < n)
		{
			write(1,&s[i],1);
			i++;
		}
		write(1, ", ",1);
		return ;
	}
	char j = c + 1;
	int x = 0;
	while(j <= '9')
	{
		dfs(n,j,s,count + 1);
		j++;
	}
}


void ft_print_combn(int n)
{
	char s[11];
	char i = '0';
	while(i < '9')
	{
		dfs(n,i,s,0);
		i++;
	}
}

int main(void)
{
	ft_print_combn(9);
	return (0);
}
