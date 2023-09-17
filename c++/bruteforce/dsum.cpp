#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int m = 1;
	bool x;
	int sum;
	int m_temp = m;
	while(n >= m_temp)
	{
		m = m_temp;
		x = true;
		sum = m;
		while(m > 0)
		{
			sum += m % 10;
			m /= 10;
		}
		if(sum == n)
		{
			x = false;
			break;
		}
		m_temp++ ;
	}
	if(x == true)
		cout << 0 << '\n';
	else
		cout << m_temp << '\n';
	return (0);
}
