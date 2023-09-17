#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int mx_y = 0;
	int mx_m = 0;
	int mx_d = 0;
	string mx_s = "";
	int mn_y = 2020;
	int mn_m = 13;
	int mn_d = 32;
	string mn_s = "";

	for(int i = 0; i < n; i++)
	{
		string a;
		int y,m,d;

		cin >> a >> d >> m >> y;
		
		if(y > mx_y)
		{
			mx_y = y;
			mx_m = m;
			mx_d = d;
			mx_s = a;
		}
		else if(y == mx_y)
		{
			if(m > mx_m)
			{
				mx_y = y;
				mx_m = m;
				mx_d = d;
				mx_s = a;
			}
			else if(m == mx_m)
			{
				if(d > mx_d)
				{
					mx_y = y;
					mx_m = m;
					mx_d = d;
					mx_s = a;
				}
			}
		}
		if(y < mn_y)
		{
			mn_y = y;
			mn_m = m;
			mn_d = d;
			mn_s = a;
		}
		else if(y == mn_y)
		{
			if(m < mn_m)
			{
				mn_y = y;
				mn_m = m;
				mn_d = d;
				mn_s = a;
			}
			else if(m == mn_m)
			{
				if(d < mn_d)
				{
					mn_y = y;
					mn_m = m;
					mn_d = d;
					mn_s = a;
				}
			}
		}
	}
	cout << mx_s << '\n' << mn_s << '\n';
	return (0);
}

