#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int k;
	cin >> k;
	vector <int> stack(k);
	int input;
	int front = 0;

	for(int i = 0; i < k; i++)
	{
		cin >> input;
		if(input == 0)
			front--;
		else
		{
			stack[front] = input;
			front++;
		}
	}
	int sum = 0;
	for(int i = 0; i < front; i++)
		sum += stack[i];
	cout << sum << endl;
	return (0);
}
