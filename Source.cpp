#include<iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char mas[99] = { 'а', 'б', 'в', 'г', 'д', 'е', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т',
	'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я' };

	cout << "Введите строку на русском языке (при вводе иных символов, эти символы останутся без изменений!): ";
	string s;
	int n;
	int y;
	getline(cin, s);
	cout << "Введите шаг в виде числа от -33 до 33. Для расшифровкки введите значение шага со знаком минус (например, -3): ";
	cin >> n;
	if (-33 <= n & n <= 33) {

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
	else { cout << "Введены неккоректные данные, попробуйте еще раз!"; }
	
	
}
