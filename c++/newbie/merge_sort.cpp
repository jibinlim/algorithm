#include <iostream>
#include <vector>
int tmp[1000001];
using namespace std;
void merge(int *arr, int left, int right)
{
	int l,r,k;
	int mid = (left + right) / 2;
	l = left;
	r = mid + 1;
	k = left;
	while(l <= mid && r <= right)
	{
		if(arr[l] <= arr[r])
		{
			tmp[k] = arr[l];
			k++;
			l++;
		}
		else
		{
			tmp[k] = arr[r];
			k++;
			r++;
		}
	}
	if(l > mid)
		for(int i = r; i <= right; i++, k++)
			tmp[k] = arr[i];
	else
		for(int i = l; i <= mid; i++,k++)
			tmp[k] = arr[i];

	for(int i = left; i <= right; i++)
		arr[i] = tmp[i];
}

void mergesort(int *arr, int left, int right)
{
	if(left < right)
	{
		int mid = (left + right) / 2;
		mergesort(arr, left, mid);
		mergesort(arr, mid + 1, right);
		merge(arr, left, right);
	}
}

int main(void)
{
	int n;
	cin >> n;
	vector<int> arr(n);

	for(int i = 0; i < n; i++)
		cin >> arr[i];
	mergesort(arr.data(), 0, n - 1);
	for(int i = 0; i < n; i++)
		cout << arr[i] << '\n';
	return (0);
}
