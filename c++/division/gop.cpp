#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long a,b,c;
	cin >> a >> b >> c;
	int x = 1;
	while(b > 0)
	{
		x *= a;
		b--;
	}
	cout << x % c <<'\n';
	return (0);
}
