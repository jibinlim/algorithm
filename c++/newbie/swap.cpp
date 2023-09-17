#include <iostream>
using namespace std;

void swap(int& a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int a,b;
	cin >> a >> b;
	cout << "원래: " << a << " " << b << endl;

	swap(a, b);
	cout << "바뀐거: " << a << " " << b << endl;
	return (0);
}
