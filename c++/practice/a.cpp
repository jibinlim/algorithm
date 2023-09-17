#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> a;
	a.push_back(1);
	a.push_back(3);
	a.push_back(5);
	a.push_back(7);
	a.push_back(5);
	a.push_back(5);

	sort(a.begin(),a.end());
	cout << upper_bound(a.begin(),a.end(),5) - lower_bound(a.begin(),a.end(),5) << '\n';
	return (0);
}
