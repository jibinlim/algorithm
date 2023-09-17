#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	reverse(arr.begin(),arr.end());
	vector<int> st;
	bool flag = true;
	int j = 1;
	while(1)
	{
		if(arr.size() > 0 && j == arr.back())
		{
			arr.pop_back();
			j++;
		}
		else if(st.size() > 0 && j == st.back())
		{
			st.pop_back();
			j++;
		}
		else if(arr.size() > 0 && find(arr.begin(),arr.end(),j) != arr.end())
		{
			while(arr.back() != j)
			{
				st.push_back(arr.back());
				arr.pop_back();
			}
		}
		else if(st.size() > 0 && find(st.begin(),st.end(),j) != st.end())
		{
			break;
		}
		if(arr.empty() && st.empty())
		{
			flag = false;
			break;
		}
	}
	if(flag)
		cout << "Sad";
	else
		cout << "Nice";
	cout << '\n';
	return (0);
}


