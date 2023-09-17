#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	map <string, bool> m;

	m.insert(pair<string, bool>("map1", true));
	m["a"] = false;
	map<string,bool>:: iterator iter;
	iter = m.find("map1");
	if(iter != m.end())
	{
		cout << iter -> first << '\n';
		cout << iter -> second << '\n';
	}
	return (0);
}
