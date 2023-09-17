#include <iostream>
using namespace std;

int main(void)
{
	string s;
	cin >> s;

	int i = 1;
	bool flag = false;
	string x = "";
	x += s[0];
	while(s[i])
	{
		if(flag)
		{
			x += s[i];
			flag = false;
		}
		if(s[i] == '-')
			flag = true;
		i++;
	}
	cout << x << '\n';
	return (0);
}
