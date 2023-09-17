#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(double *a, double *b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 1,b=3;
	double x= 0.1,y=0.2;
	char p='c',q='x';

	cout << "원래 a: " << a << " b:" << b << endl;
	cout << "원래 x: " << x << " y:" << y << endl;
	cout << "원래 p: " << p << " q:" << q << endl;
	swap(&a,&b);
	cout << " a:" << a << " b:" << b << endl;
	swap(&x, &y);
	cout << " x:" << x << " y:" << y << endl;
	swap(&p, &q);
	cout << " p:" << p << " q:" << q << endl;
	return (0);
}
