#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int c = 0;
	string input;
	set <string> s;
	while(n > 0)
	{
		cin >> input;
		if(input == "ENTER")
		{
			c += s.size();
			s.clear();
		}
		else
		{
			s.insert(input);
		}
		n--;
	}
	c+=s.size();
	cout << c << '\n';
	return (0);
}
