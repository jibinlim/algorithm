#include <iostream>
#include <cstdio>
using namespace std;

void blank(int n)
{
	while(n > 0)
	{
		cout << " ";
		n--;
	}
}

void can(int n)
{
	if(n == 1)
	{
		cout << "-";
		return ;
	}
	can(n / 3);
	blank(n / 3);
	can(n / 3);
}
	                   

int main(void)
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int x = 1;
		while(n > 0)
		{
			x *= 3;
			n--;
		}
		can(x);
		cout << "\n";
	}
	return (0);
}
