#include <iostream>
#include <windows.h>
using namespace std;


void vvodLatinytsy() {
	char BigLatter = ' ', littleLatter = ' ';
	cout << "Введите прописную и заглавную буквы(латиница):\n";
	cin >> littleLatter;
	cin >> BigLatter;
	if  (littleLatter >= 0x61 and littleLatter <= 0x7A and BigLatter <= 0x5A and BigLatter >= 0x41)
		cout << "Это буквы латинского алфавита, их разница: " << (int(littleLatter) - int(BigLatter));
	else
		cout << "Это не буквы латинского алфавита.";
}


void vvodKirillytcy() {
	cout << "Введите прописную и заглавную буквы(кириллица):\n";
	char BigLatter = ' ', littleLatter = ' ';
	cin >> littleLatter;
	cin >> BigLatter;
	if  (littleLatter >= 0xffffffe0 and littleLatter <= 0xffffffff and BigLatter <= 0xffffffdf and BigLatter >= 0xffffffc0)
		cout << "Это буквы русского алфавита, их разница: " << (int(littleLatter) - int(BigLatter));
	else
		cout << "Это не буквы русского алфавита.";
}


void vvodNumber() {
	cout << "Введите цифру:\n";
	char number = ' ';
	cin >> number;
	if  (number >= 0x30 and number <= 0x39)
		printf("Код цифры %c: %x", number, number);
	else
		cout << "Это не цифра.";
}




void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "Russian");
	int variant_otveta;
	cout << "Введите цифру: \n1 - прописная и заглавная буквы латинского алфавита;\n1 - прописная и заглавная буквы русского алфавита;\n3 - код цифры;\n4 - Выход.\n";
	cin >> variant_otveta;
	switch  (variant_otveta) {
	case 1: {
		vvodLatinytsy();
	} break;
	case 2: {
		vvodKirillytcy();
	} break;
	case 3: {
		vvodNumber();
	} break;
	case 4: break;
	default: puts("Нет такого варианта");
	}
}