#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	for(int z = 0; z < t; z++)
	{
		int a[10] = {0,};
		for(int i = 0; i < 10; i++)
			cin >> a[i];
		for(int i = 0; i < 10; i++)
			for(int j = i + 1; j < 10; j++)
				if(a[i] < a[j])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
		cout << a[2] << '\n';
	}
	return (0);
}
