#include <iostream>
using namespace std;

inline int sqaure(int y)
{
	if(y < 1)
		return 1;
	return sqaure(y - 1) * y;
}

int main(void)
{
	int x;
	cin >> x;
	cout << sqaure(x) << endl;
	return (0);
}
