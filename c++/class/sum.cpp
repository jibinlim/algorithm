#include <iostream>
using namespace std;

class Sum{
	private:
		int a,b,c,d,e;
	public:
		Sum(int x, int y, int z, int t, int k)
		{
			a = x;
			b = y;
			c = z;
			d = t;
			e = k;
		};

		int calculate(void){
			return a + b + c + d + e;
		}
};

int main(void)
{
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	Sum sum(a,b,c,d,e);
	cout << sum.calculate() << endl;
	return (0);
}
