#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int f1,f2;
	vector <int> f3(1000);
	cin >> f1 >> f2;
	int j = 0;
	while(f1 > 0)
	{
		if(f1 % 2 == 1)
		{
			f3[j] = f2;
			j++;
		}
		f1 << 1;
		f2 >> 1;
	}
	int sum = 0;
	for(int i = 0; i < j; i++)
		sum += f3[i];
	cout << sum;
	return (0);
}
