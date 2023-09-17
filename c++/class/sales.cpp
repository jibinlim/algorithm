#include <iostream>
using namespace std;

class Pay{
	private:
		int x;
	public:
		Pay(int y)
		{
			x = 50 + y * 0.12;
		}
		void print(void)
		{
			cout << "이번 달 급여: " << x << endl;
		}
};

int main(void)
{
	int sale;
	cin >> sale;
	Pay pay(sale);
	pay.print();
	return (0);
}
