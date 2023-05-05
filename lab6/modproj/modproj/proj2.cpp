#include <iostream>
using namespace std;

void proj2() {
	cout << "¬ведите прописную и заглавную буквы(кириллица):\n";
	char A = ' ', a = ' ';
	cin >> a;
	cin >> A;
	if (a >= 0xffffffe0 and a <= 0xffffffff and A <= 0xffffffdf and A >= 0xffffffc0)
		cout << "Ёто буквы русского алфавита, их разница: " << (int(a) - int(A));
	else
		cout << "Ёто не буквы русского алфавита.";
}
