#include <iostream>
using namespace std;

int a[9] = {0,};
int sum = 0;
int s[7] = {0,};

void dfs(int x, int c)
{
	if(c == 6)
	{
		if(sum == 100)
		{
			for(int i = 0; i < 7; i++)
				cout << s[i] << '\n';
		}
		return ;
	}
	for(int i = x + 1; i < 9; i++)
	{
		sum += a[i];
		s[c + 1] = a[i];
		dfs(i, c + 1);
		sum -= a[i];
		s[c + 1] = 0;
	}
}

int main(void)
{
	for(int i = 0; i < 9; i++)
		cin >> a[i];

	for(int i = 0; i < 9; i++)
	{
		sum += a[i];
		s[0] = a[i];
		dfs(i,0);
		sum -= a[i];
		s[0] = 0;
	}
	return (0);
}
