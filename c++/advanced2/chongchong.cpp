#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	string a;
	string b;
	map<string , bool>dance;
	dance["ChongChong"] = true;
	for(int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if(dance[a])
			dance[b] = true;
		if(dance[b])
			dance[a] = true;
	}
	int c = 0;
	for(auto i = dance.begin(); i != dance.end(); i++)
		if(i -> second == true)
			c++;
	cout << c << '\n';
	return (0);
}
