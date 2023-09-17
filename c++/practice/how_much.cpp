#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t > 0)
	{
		int s;
		cin >> s;
		int n;
		cin >> n;
		while(n > 0)
		{
			int p,q;
			cin >> p >> q;
			s += p * q;
			n--;
		}
		cout << s << '\n';
		t--;
	}
	return (0);
}
