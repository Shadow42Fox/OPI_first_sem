#include <iostream>
#include <windows.h>
#include "proj1.h"
#include "proj2.h"
#include "proj3.h"
using namespace std;


void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "Russian");
	int k; char a; char A;
	cout << "Введите 1,2,3, чтобы начать или 4, чтобы выйти:\n";
	cin >> k;
	while (k != 4) {
		cout << "\n\nВведите цифру: \n1 - прописная и заглавная буквы латинского алфавита;\n1 - прописная и заглавная буквы русского алфавита;\n3 - код цифры;\n4 - Выход.\n";
		cin >> k;
		switch (k) {
		case 1: {  proj1(); }continue;
		case 2: {  proj2(); }continue;
		case 3: {  proj3(); }continue;
		case 4: break;
		default:puts("Нет такого варианта");
		}
	}
}
