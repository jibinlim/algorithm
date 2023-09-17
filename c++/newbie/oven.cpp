#include <iostream>

using namespace std;
int main(void)
{
	int h,m,c;
	cin >> h >> m;
	cin >> c;
	m += c;
	h += m / 60;
	m %= 60;
	if(h >= 24)
		h -= 24;
	cout << h <<" " << m << endl;
	return (0);
}
