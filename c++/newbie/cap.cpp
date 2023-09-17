#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		string s;
		getline
		cin.ignore();
		if(s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 'a' - 'A';
		cout << s << '\n';
	}
	return (0);
}
