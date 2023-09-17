#include <iostream>
using namespace std;

int main(void)
{
	int a1,a2;
	cin >> a1 >> a2;
	int c;
	cin >> c;
	int n;
	cin >> n;
	int f;
	bool flag = false;
	for(int i = n; i <= 100; i++)
	{
		if(a1 * i + a2 > c * i)
		{
			flag = true;
			break;
		}
	}
	if(flag)
		cout << 0;
	else
		cout << 1;
	cout << '\n';
	return (0);
}
