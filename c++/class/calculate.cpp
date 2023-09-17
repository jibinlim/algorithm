#include <iostream>
using namespace std;

class Add{
	private:
		int a,b;
	public:
		void setValue(int x, int y)
		{
			a = x;
			b = y;
		}

		int calculate(void)
		{
			return a + b;
		}
};

class Sub{
	private:
		int a,b;
	public:
		void setValue(int x,int y)
		{
			a = x;
			b = y;
		}

		int calculate(void)
		{
			return a - b;
		}
};

class Mul{
	private:
		int a,b;
	public:
		void setValue(int x, int y)
		{
			a = x;
			b = y;
		}

		int calculate(void)
		{
			return a * b;
		}
};

class Div{
	private:
		int a,b;
	public:
		void setValue(int x, int y)
		{
			a = x;
			b = y;
		}

		int calculate(void)
		{
			return a / b;
		}
};


int main(void)
{
	int a,b;
	char c;
	while(1)
	{
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> a >> b >> c;

		Add add;
		Sub sub;
		Mul mul;
		Div div;

		if(c == '+')
		{
			add.setValue(a,b);
			cout << add.calculate() << endl;
		}
		else if(c == '/')
		{
			div.setValue(a,b);
			cout << div.calculate() << endl;
		}
		else if(c == '-')
		{
			sub.setValue(a,b);
			cout << sub.calculate() << endl;
		}
		else if(c == '*')
		{
			mul.setValue(a,b);
			cout << mul.calculate() << endl;
		}
	}
	return (0);
}
