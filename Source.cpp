#include<iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char mas[99] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
	'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�' };

	cout<< "������� ������ �� ������� �����: ";
	string s;
	int n;
	int y;
	getline(cin, s);
	cout << "������� ��� � ���� ����� �� -33 �� 33. ��� ������������ ������� �������� ���� �� ������ ����� (��������, -3): ";
	cin >> n;
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 33; j++) {
			if (s[i] == mas[j]) {
				y = (j + n) % 33;
				if (y < 0) {
					s[i] = mas[33 + y];
					break;
				}
				else {
					s[i] = mas[y];
					break;
				}
			}
		}
	}
	
	cout << endl << s << " \n\n";
	
}
