#include <iostream>
#include <algorithm>
using namespace std;

int sqrt(int m)
{
	for(int i = 1; i <= m / 2; i++)
	{
		if(i * i == m)
			return i;
		else if(i * i > m)
			return i - 1;
	}
	return 0;
}

int main(void)
{
	int m,n;
	cin >> m >> n;

	int c = sqrt(m);
	int ans = 0;
	int mn = 2147483647;
	while(c * c <= n)
	{
		if(c * c >= m)
		{
			if(c * c < mn)
				mn = c * c;
			ans += c * c;
		}
		c++;
	}
	if(ans == 0)
		cout << -1;
	else
	{
		cout << ans << '\n';
		cout << mn << '\n';
	}
	return (0);
}
