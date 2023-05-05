#include <iostream>
using namespace std;

void proj3() {

	cout << "Введите цифру:\n";
	char a = ' ';
	cin >> a;
	if (a >= 0x30 and a <= 0x39)
		printf("Код цифры %c: %x", a, a);
	else
		cout << "Это не цифра.";
}