#include <iostream>

using namespace std;

int main(void)
{
	int cook[6] = {0,};
	int mx = 0;
	int mx_i;
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j < 5; j++)
		{
			int input;
			cin >> input;
			cook[i] += input;
			if(cook[i] > mx)
			{
				mx = cook[i];
				mx_i = i;
			}
		}
	}
	cout << mx_i << " " << mx << '\n';
	return (0);
}
