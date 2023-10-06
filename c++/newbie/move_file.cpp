#include <iostream>

using namespace std;
int main(void)
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int mn = a + d > b + c ? b + c : a + d;
	cout << mn << '\n';
	return (0);
}
