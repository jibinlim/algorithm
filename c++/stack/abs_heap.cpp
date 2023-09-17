#include <iostream>
#include <vector>
using namespace std;
long ab(long a)
{
	if(a < 0)
		return a * -1;
	return a;
}

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	vector<long> arr(n + 1);
	long x;
	int f;
	f = 1;
	while(n > 0)
	{
		cin >> x;
		if(x == 0)
		{
			if(arr[1] == 2147483649)
				cout << 0 << '\n';
			else
			{
				cout << arr[1] << '\n';
				long temp = arr[f - 1];
				arr[f - 1] = arr[1];
				arr[1] = temp;
			}
			int p = 1;
			arr[f - 1] = 2147483649;
			f--;
			if(f < 1)
				f = 1;
			while(p * 2 < f)
			{
				int left = p * 2;
				int right = p * 2 + 1;
				if(ab(arr[left]) > ab(arr[right]))
				{
					if(ab(arr[p]) > ab(arr[right]))
					{
						long temp = arr[p];
						arr[p] = arr[right];
						arr[right] = temp;
					}
					if(ab(arr[p]) == ab(arr[right]))
					{
						if(arr[p] > arr[right])
						{
							long temp = arr[p];
							arr[p] = arr[right];
							arr[right] = temp;
						}
					}
					p = right;
				}
				else if(ab(arr[left]) < ab(arr[right]))
				{
					if(ab(arr[p]) > ab(arr[left]))
					{
						long temp = arr[p];
						arr[p] = arr[left];
						arr[left] = temp;
					}
					if(ab(arr[p]) == ab(arr[left]))
					{
						if(arr[p] > arr[left])
						{
							long temp = arr[p];
							arr[p] = arr[left];
							arr[left] = temp;
						}
					}
					p = left;
				}
				else if(ab(arr[left]) == ab(arr[right]))
				{
					if(arr[right] > arr[left])
					{
						if(ab(arr[p]) > ab(arr[left]))
						{
							long temp = arr[p];
							arr[p] = arr[left];
							arr[left] = temp;
						}
						else if(ab(arr[p]) == ab(arr[left]))
						{
							if(arr[p] > arr[left])
							{
								long temp = arr[p];
								arr[p] = arr[left];
								arr[left] = temp;
							}
						}
						p = left;
					}
					else if(arr[left] > arr[right])
					{
						if(ab(arr[p]) > ab(arr[right]))
						{
							long temp = arr[p];
							arr[p] = arr[right];
							arr[right] = temp;
						}
						else if(ab(arr[p]) == ab(arr[right]))
						{
							if(arr[p] > arr[right])
							{
								long temp = arr[p];
								arr[p] = arr[right];
								arr[right] = temp;
							}
						}
						p = right;
					}
					else if(arr[left] == arr[right])
					{
						if(ab(arr[p]) > ab(arr[left]))
						{
							long temp = arr[p];
							arr[p] = arr[left];
							arr[left] = temp;
						}
						else if(ab(arr[p]) == ab(arr[left]))
						{
							if(arr[p] > arr[left])
							{
								long temp = arr[p];
								arr[p] = arr[left];
								arr[left] = temp;
							}
						}
						p = left;
					}
				}
			}
		}
		else
		{
			arr[f] = x;
			int i;
			i = f;
			while(i > 1 && ab(arr[i / 2]) >= ab(arr[i]))
			{
				if(ab(arr[i / 2]) == ab(arr[i]))
				{
					if(arr[i / 2] > arr[i])
					{
						long temp = arr[i];
						arr[i] = arr[i / 2];
						arr[i / 2] = temp;
					}
				}
				else
				{
					long temp = arr[i];
					arr[i] = arr[i / 2];
					arr[i / 2] = temp;
				}
				i/=2;
			}
			f++;
		}
		n--;
	}
	return (0);
}
