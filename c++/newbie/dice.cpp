#include <iostream>

using namespace std;
int main(void)
{
	int d1,d2,d3;
	int arr[7] = {0,};
	cin >> d1 >> d2 >> d3;
	arr[d1]++;
	arr[d2]++;
	arr[d3]++;
	int price = 0;
	for(int i = 6; i > 0; i--)
	{
		if(arr[i] == 0 || arr[i] == 1)
			continue;
		if(arr[i] == 3)
			price =  i * 1000 + 10000;
		if(arr[i] == 2)
			price = i * 100 + 1000;
		break;
	}
	if(price == 0)
		for(int i = 6; i > 0; i--)
			if(arr[i] > 0)
			{
				price = i * 100;
				break;
			}
	cout << price << endl;
	return (0);
}
