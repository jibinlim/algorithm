#include <iostream>
using namespace std;

int arr[1000001];

void quick(int i, int j)
{
	if(i >= j) return;
	int pivot = arr[(i + j) / 2];
	int left = i;
	int right = j;

	while(left <= right)
	{
		while(arr[left] < pivot) left++;
		while(arr[right] > pivot) right--;
		if(left <= right)
		{
			swap(arr[left],arr[right]);
			left++;
			right--;
		}
	}
	quick(i, right);
	quick(left, j);
}

int main(void)
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	quick(0,n - 1);

	for(int i = 0; i < n; i++)
		cout << arr[i] << "\n";
	return (0);
}
