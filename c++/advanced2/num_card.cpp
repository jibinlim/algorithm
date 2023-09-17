#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	map<string, bool>card;
	string input;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		card[input] = false;
	}
	int m;
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		cin >> input;
		card[input] = true;
	}

	for(int i = 0; i <

