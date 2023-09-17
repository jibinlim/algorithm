#include <iostream>
using namespace std;

int main(void)
{
	string str;
	int n;

	int x = 10;
	int to = 0;
	cin >> str >> n;
	for(int i = 0; str[i]; i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
			to = to * n + (str[i] - '0');
		else
			to = to * n + (str[i] - 'A' + x);
	}
	cout << to;
	return (0);
}
