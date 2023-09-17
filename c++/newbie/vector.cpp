#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector <int>x {1,2,3,4,5};
	for(auto i = x.begin(); i < x.end(); i++)
	{
		cout << *i << ' ';
	}
	return (0);
}
