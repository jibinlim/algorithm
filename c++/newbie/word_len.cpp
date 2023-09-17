#include <iostream>
using namespace std;

int main(void)
{
	char* str = new char[101];
	cin >> str;
	int i;
	for(i = 0; str[i]; i++){}
	
	cout << i;
	delete[] str;
	return (0);
}
