#include <iostream>
using namespace std;

class Gugudan{
	private:
		int g;
	public:
		Gugudan(int y)
		{
			g = y;
		};
		void print(void)
		{
			for(int i = 1; i <= 9; i++)
				cout << g << " * " << i << " = " << g * i << endl;
		}
};

int main(void)
{
	int x = 1;
	while(1)
	{
		cout << "숫자 입력: ";
		cin >> x;
		if(!(x >= 1 && x <= 9))
			break;
		Gugudan gugu(x);
		gugu.print();
	}
	return (0);
}
