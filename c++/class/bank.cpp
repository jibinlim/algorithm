#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int i = 0;
	int id[100];
	char name[100][10];
	int deposit[100];
	while(1)
	{
	cout << "----------------Menu---------------" << endl;
	cout << "1. 계좌 개설" << endl << "2. 입금" << endl;
	cout << "3. 출금" << endl << "4. 계좌 정보" << endl;
	cout << "5. 프로그램 종료" << endl << endl;
	cout << "선택 :";
	int c;
	cin >> c;

	int f_id;
	int money;
	int j;
	if(c == 1)
	{
		cout << "[계좌 개설]" << endl;
		cout << "계좌 ID: ";
		cin >> id[i];
		cout << "이름: ";
		cin >> name[i];
		cout << "입금액: ";
		cin >> deposit[i];
		i++;
	}
	else if(c == 2)
	{
		cout << "[입금]" << endl;
		cout << "계좌 ID: ";
		cin >> f_id;
		for(j = 0; j < i; j++)
			if(id[j] == f_id)
				break;
		cout << "입금액: ";
		cin >> money;
		deposit[j] += money;
		cout << "입금 완료!" << endl;
	}
	else if(c == 3)
	{
		cout << "[출금]" << endl;
		cout << "계좌 ID: ";
		cin >> f_id;
		for(j = 0; j < i; j++)
			if(id[j] == f_id)
				break;
		cout << "출금액: ";
		cin >> money;
		deposit[j] -= money;
		cout << "출금 완료!" << endl;
	}
	else if(c == 4)
	{
		cout << id[0];
		cout << "[모든 계좌 정보]" << endl;
		for(j = 0; j < i; j++)
		{
			cout << "계좌 ID: " << id[j] << endl;
			cout << "이름: " << name[j] << endl;
			cout << "잔액: " << deposit[j] << endl;
		}
		cout << endl;
	}
	else
		break;
	}
	return (0);
}
