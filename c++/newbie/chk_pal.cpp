#include <iostream>
using namespace std;

int main()
{
	char s[101];
	cin >> s;
	int f = 0;
	int r = 0;
	for(;s[r];r++){}
	r--;
	for(;f<=r;f++,r--)
		if(s[f] != s[r])
		{
			cout << 0 << endl;
			return 0;
		}
	cout << 1 << endl;
	return 0;
}
