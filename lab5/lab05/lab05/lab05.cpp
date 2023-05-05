#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "Russian");
	int k; unsigned char a; unsigned char A;
	cout << "Введите цифру: \n1 - прописная и заглавная буквы латинского алфавита;\n1 - прописная и заглавная буквы русского алфавита;\n3 - код цифры;\n4 - Выход.\n";
	cin >> k;
	switch (k) {
	case 1: {
		char A = ' ', a = ' ';
		cout << "Введите прописную и заглавную буквы(латиница):\n";
		cin >> a;
		cin >> A;
		if (a >= 0x61 and a <= 0x7A and A <= 0x5A and A >= 0x41)
			cout << "Это буквы латинского алфавита, их разница: " << (int(a) - int(A));
		else
			cout << "Это не буквы латинского алфавита.";
	} break;
	case 2: {
		cout << "Введите прописную и заглавную буквы(кириллица):\n";
		char A = ' ', a = ' ';
		cin >> a;
		cin >> A;
		if (a >= 0xffffffe0 and a <= 0xffffffff and A <= 0xffffffdf and A >= 0xffffffc0)
			cout << "Это буквы русского алфавита, их разница: " << (int(a) - int(A));
		else
			cout << "Это не буквы русского алфавита.";
	} break;
	case 3: {
		cout << "Введите цифру:\n";
		char a = ' ';
		cin >> a;
		if (a >= 0x30 and a <= 0x39)
			printf("Код цифры %c: %x", a, a);
		else
			cout << "Это не цифра.";
	} break;
	case 4: break;
	default:puts("Нет такого варианта");
	}

	int milk, eggs, sugar, razr, muka;
	cout << "Введите количество молока(мл), яиц(кол-во), сахара(ст.л.), разрыглителя(ч.л.) и муки(ст.л):\n";
	cin >> milk;
	cin >> eggs;
	cin >> sugar;
	cin >> razr;
	cin >> muka;
	if (milk >= 200 && eggs >= 2 && sugar >= 2 && razr >= 1 && muka >= 10)
		cout << "Ура! Вы сможете приготовить панкейки на завтрак)";
	else
		cout << "Сегодня без панкейков на завтрак :(";

}

