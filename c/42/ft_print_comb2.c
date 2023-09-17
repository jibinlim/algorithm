#include <unistd.h>

void ft_print_comb2(void)
{
	int a = 0;
	int b = 0;
	char a_1;
	char a_2;
	char b_1;
	char b_2;
	while(b <= 98)
	{
		a = b + 1;
		while(a <= 99)
		{
			a_1 = a / 10 + '0';
			a_2 = a % 10 + '0';
			b_1 = b / 10 + '0';
			b_2 = b % 10 + '0';
			write(1,&b_1,1);
			write(1,&b_2,1);
			write(1," ",1);
			write(1,&a_1,1);
			write(1,&a_2,1);
			if(b == 98)
				break;
			write(1,", ",2);
			a++;
		}
		b++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}

