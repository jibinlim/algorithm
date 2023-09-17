#include <iostream>
using namespace std;

int main(void)
{
	int s;
	cin >> s;
	for(int i = 1; i <= s; i++)
	{
		for(int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
	return (0);
}
