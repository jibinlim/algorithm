#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	char str[6][16] ={0,};

	int max = 0;
	int count;
	for(int i = 0; i < 5; i++)
	{
		cin >> str[i];
		for(int j = 0; str[i][j]; j++)
			count = j;
		if(max < count)
			max = count;
	}
	for(int i = 0; i <= max; i++)
		for(int j = 0; j < 5; j++)
		{
			if(str[j][i])
				cout << str[j][i];
		}
	cout << endl;
	return (0);
}
