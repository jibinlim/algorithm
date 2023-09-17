#include <iostream>
using namespace std;

int main(void)
{
	int input;
	int max = 0;
	int max_i;

	for(int i = 0; i < 9; i++)
	{
		cin >> input;
		if(max < input)
		{
			max = input;
			max_i = i + 1;
		}
	}
	cout << max << endl << max_i << endl;
	return (0);
}
