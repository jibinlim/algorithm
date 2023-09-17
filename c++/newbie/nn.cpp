#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string n;
	int m;
	cin >> n >> m;
	int len = n.length();
	int nn = stoi(n);
	while(nn > 0 && m > len)
	{
		cout << n;
		m -= len;
		if(m <= len)
			break;
		nn--;
	}
	if(nn > 0)
		for(int i = 0; i < m; i++)
			cout << n[i];
	return (0);
}
