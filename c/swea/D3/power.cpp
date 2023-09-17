#include <iostream>
using namespace std;

int pow(int n, int m)
{
	if(m == 0)
		return 1;
	return n * pow(n, m - 1);
}

int main(void)
{
	for(int a = 0; a < 10; a++)
	{
		int num;
		cin >> num;
		int n,m;
		cin >> n >> m;
		cout << "#" << a + 1 << ' ' << pow(n,m) << '\n';
	}
	return (0);
}
