#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t > 0)
	{
		int v,e;
		cin >> v >> e;
		cout << e + 2 - v << '\n';
		t--;
	}
	return (0);
}
