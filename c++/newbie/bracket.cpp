#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	char b[51];
	for(int i = 0; i < t; i++)
	{
		cin >> b;
		int f = 0;
		for(int j = 0; b[j]; j++)
		{
			if(b[j] == '(')
				f++;
			else if(b[j] == ')')
				f--;
			if(f < 0)
				break;
		}
		if(f == 0)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return (0);
}
