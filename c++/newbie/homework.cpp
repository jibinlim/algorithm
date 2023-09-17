#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int stu[31] = {0,};

	for(int i = 0; i < 28; i++)
	{
		cin >> n;
		stu[n]++;
	}
	for(int i = 1; i <= 30; i++)
		if(stu[i] == 0)
			cout << i << endl;
	return (0);
}
