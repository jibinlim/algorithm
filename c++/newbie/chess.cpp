#include <iostream>
using namespace std;

int main(void)
{
	int* chess = new int[6];
	for(int i = 0; i < 6; i++)
	{
		cin >> chess[i];
		if(i < 2)
			chess[i] = 1 - chess[i];
		else if(i < 5)
			chess[i] = 2 - chess[i];
		else
			chess[i] = 8 - chess[i];
	}
	for(int i = 0; i < 6; i++)
	{
		if(i == 5)
			cout << chess[i] << endl;
		else
			cout << chess[i] << " ";
	}
	return (0);
}
