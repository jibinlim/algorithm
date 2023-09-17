#include <iostream>

using namespace std;

int main(void)
{
	int num = 1000000;
	int arr[1000001] = {0,};
	arr[1] = 1;
	for(int i = 2; i <= num; i++)
	{
		if(arr[i] == 1)
			continue;

		for(int j = i * 2; j <= num; j += i)
			arr[j] = 1;
	}

	for(int i = 1; i <= 100; i++)
	{
		if(arr[i] == 0)
			cout << i << ' ';
	}
	return (0);
}
