#include <iostream>

using namespace std;
int main(void)
{
	int a,b;

	while(true)
	{
		cin >> a >> b;
		if(cin.eof())
			break;
		cout << a + b << endl;
	}
	return (0);
}
