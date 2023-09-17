#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[101];
	char b[101];
	char c[101] = "\0";

	scanf("%s",a);
	scanf("%s",b);

	int a_len = strlen(a);
	int b_len = strlen(b);
	int gap;
	int i;
	int c_len;
	
	int s = 0;
	if(a_len == b_len)
	{
		for(i = a_len - 1; i >= 0; i--)
		{
			if(a[i] + b[i] - '0'  + s > '9')
			{
				c[i + 1] = a[i] + b[i] + s - '9' - 1;
				s = 1;
			}
			else
			{
				c[i + 1] = a[i] + b[i] - '0' + s;
				s = 0;
			}
		}
	}
	else if(a_len < b_len)
	{
		gap =b_len - a_len;
		for(i = a_len - 1; i >= 0; i--)
		{
			if(a[i] + b[i + gap] - '0' + s > '9')
			{
				c[i + 1 + gap] = a[i] + b[i + gap] + s  - '9'  - 1;
				s = 1;
			}
			else
			{
				c[i + gap + 1] = a[i] + b[i + gap] - '0' + s;
				s = 0;
			}
		}
		for(i = gap - 1; i >= 0; i--)
		{
			if(b[i] + s > '9')
			{
				c[i + 1] = b[i] + s - '9' - 1 + '0';
				s = 1;
			}
			else
			{
				c[i + 1] = b[i]  + s;
				s = 0;
			}
		}
	}
	else
	{
		gap = a_len - b_len;
		for(i = b_len - 1; i >= 0; i--)
		{
			if(b[i] + a[i + gap] - '0' + s > '9')
			{
				c[i + 1 + gap] = b[i] + a[i + gap] - '9' - 1 + s;
				s = 1;
			}
			else
			{
				c[i + gap + 1] = a[i + gap] + b[i] - '0' + s;
				s = 0;
			}
		}
		for(i = gap - 1; i >= 0; i--)
		{
			if(a[i] + s > '9')
			{
				c[i + 1] = a[i] + s - '9' - 1 + '0';
				s = 1;
			}
			else
			{
				c[i + 1] = a[i] + s;
				s = 0;
			}
		}
	}
	if(s == 1)
	{
		c[0] = '1';
		printf("%s",c);
	}
	else
	{
		c[0] = '0';
		c_len = strlen(c);
		for(i = 1; i < c_len; i++)
		{
			if(c[i] >= '0' && c[i] <= '9')
				printf("%c",c[i]);
		}
	}
	return (0);
}
