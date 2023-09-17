#include <unistd.h>

void ft_putnbr(int nb)
{
	char x;
	if(nb == -2147483648)
		write(1,"-2147483648",12);
	else if(nb < 0)
	{
		write(1,"-",1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else if(nb > 0)
	{
		ft_putnbr(nb / 10);
		x = nb % 10 + '0';
		write(1,&x,1);
	}
}

int main(void)
{
	ft_putnbr(214);
	write(1,"\n",1);
	ft_putnbr(2147483647);
	write(1,"\n",1);
	ft_putnbr(-2147483647);
	write(1,"\n",1);
	ft_putnbr(200);
	return (0);

}
