#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	set<string> x;
	int len = s.length();
			x.insert(s.substr(i,j - i + 1));
	cout << x.size() << '\n';
	return (0);
}
