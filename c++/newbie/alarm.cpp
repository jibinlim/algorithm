#include <iostream>

using namespace std;
int main(void)
{
	int h,m;

	cin >> h >> m;

	if(m < 45)
	{
		h--;
		m += 15;
		if(h < 0)
			h = 23;
	}
	else
		m -= 45;
	cout << h << " " << m << endl;
	return (0);
}
