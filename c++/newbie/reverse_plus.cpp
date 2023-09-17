#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string a,b;
	cin >> a >> b;

	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int x = stoi(a) + stoi(b);
	string c = to_string(x);
	reverse(c.begin(),c.end());
	int i = 0;
	while(c[i] == '0')
		i++;
	while(c[i])
		cout << c[i++];
	return (0);
}
