#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int arr[10] = {0,};

	while(n > 0)
	{
		arr[n % 10]++;
		n /= 10;
	}

	for(int i = 9; i >= 0; i--)
	{
		while(arr[i] > 0)
		{
			cout << i;
			arr[i]--;
		}
	}
	return (0);
}

