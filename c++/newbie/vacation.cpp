#include <iostream>

using namespace std;
int main(void)
{
	int l,b,a,c,d;

	cin >> l >> b >> a >> c >> d;
	int x = b / c;
	if(b % c > 0)
		x++;
	int y = a / d;
	if(a % d > 0)
		y++;
	if(x > y)
		cout << l - x << '\n';
	else
		cout << l - y << '\n';
	return (0);
}
