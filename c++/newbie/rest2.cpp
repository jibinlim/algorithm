#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> rest(42);
	int a;

	for(int i = 0; i < 10; i++)
	{
		cin >> a;
		rest[a % 42]++;
	}
	a = 0;
	for(int i = 0; i < 42; i++)
	{
		if(rest[i] > 0)
			a++;
	}
	cout << a << endl;
	return (0);
}
