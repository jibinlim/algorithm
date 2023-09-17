#include <unistd.h>


void ft_print_comb(void)
{
	char s[4] = "012";

	while(1)
	{
		write(1,s,3);
		write(1,", ",2);
		s[2]++;
		if(s[2] > '9')
		{
			s[1]++;
			s[2] = s[1] + 1;
			if(s[1] > '8')
			{
				s[0]++;
				s[1] = s[0] + 1;
				s[2] = s[1] + 1;
			}
		}
		if(s[0] == '7' && s[1] == '8' && s[2] == '9')
		{
			write(1,s,3);
			break;
		}
	}
}

int main(void)
{
	ft_print_comb();
	return (0);
}
