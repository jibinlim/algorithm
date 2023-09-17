#include <stdio.h>

int main(void)
{
	int p,j;
	int m_p = 2147483647,m_j = 2147483647;

	for(int i = 0; i < 3; i++)
	{
		scanf("%d",&p);
		if(m_p > p)
			m_p = p;
	}
	for(int i = 0; i < 2; i++)
	{
		scanf("%d",&j);
		if(m_j > j)
			m_j = j;
	}
	int sum = m_j + m_p;
	float d = sum * 1.1;

	printf("%.1f",d);
	return (0);
}
