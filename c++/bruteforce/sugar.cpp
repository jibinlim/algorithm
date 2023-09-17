#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int t_c = n / 3;
	int f_c;
	int min = 2147483647;

	while(t_c >= 0)
	{
		int count = t_c;
		if((n - (t_c * 3)) % 5 == 0)
			count += (n - (t_c * 3)) / 5;
		else
			count = 0;

		if(count != 0)
			if(min > count)
				min = count;
		t_c--;
	}
	if(min == 2147483647)
		cout << -1 << '\n';
	else
		cout << min << '\n';
	return (0);
}
