#include <iostream>
using namespace std;

void proj1() {

	char A = ' ', a = ' ';
	cout << "������� ��������� � ��������� �����(��������):\n";
	cin >> a;
	cin >> A;
	if (a >= 0x61 and a <= 0x7A and A <= 0x5A and A >= 0x41)
		cout << "��� ����� ���������� ��������, �� �������: " << (int(a) - int(A));
	else
		cout << "��� �� ����� ���������� ��������.";
}