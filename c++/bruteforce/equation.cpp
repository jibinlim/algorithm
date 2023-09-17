#include <iostream>
using namespace std;

int main(void)
{
	int a,b,c,d,e,f;

	cin >> a >> b >> c >> d >> e >> f;
	int x,y;
	int h = 0;
	for(x = -999; x <= 999; x++)
	{
		for(y = -999; y <= 999; y++)
		{
			if(a * x + b * y == c)
			{
				if(d * x + e * y == f)
				{
					h = 1;
					break;
				}
			}
		}
		if(h == 1)
			break;
	}
	cout << x << " " << y << '\n';
	return (0);
}
