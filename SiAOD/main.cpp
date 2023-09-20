#include <iostream>
#include <bitset>

using namespace std;

unsigned int task1(unsigned int num) {
	int mask = 0xF0;
	return num | mask;
}

unsigned int task2(unsigned int num) {
	int mask = ~(1 << 9) & ~(1 << 11) & ~(1 << 3);
	return num & mask;
}

unsigned int task3(unsigned int num) {
	return num << 7;
}

unsigned int task4(unsigned int num) {
	return num >> 7;
}

unsigned int task5(unsigned int num, int n) {	
	int mask = 1 << n;
	return num | mask;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n, taskNum = -1;
	unsigned int num;

	cout << sizeof(25);
	
	while (taskNum != 0) {
		cout << "============== � � � � ==============" << endl;
		cout << "   �������� ����� �������  (1 - 5)   " << endl;
		cout << "   0 - ����� �� ���������" << endl;
		cout << "-------------------------------------" << endl;
		cout << " �����: ";
		cin >> taskNum;
		cout << "=====================================" << endl;

		switch (taskNum) {
		case 1:
			num = 0xA7;
			cout << "-------------------------------------" << endl;
			cout << "              ���������              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " �������� ����� � 2-�� ��: " << bitset<12>(num) << "(" << hex << num << " � 16-�� ��)" << endl;
			cout << " ���������: " << bitset<12>(task1(num)) << "(" << hex << task1(num) << " � 16-�� ��)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		case 2:
			cout << "9, 11 � 3 ���� ������ ����� ������ �������� ?" << endl;
			cin >> hex >> num;
			cout << "-------------------------------------" << endl;
			cout << "              ���������              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " �������� ����� � 2-�� ��: " << bitset<12>(num) << "(" << hex << num << " � 16-�� ��)" << endl;
			cout << " ���������: " << bitset<12>(task2(num)) << "(" << hex << task2(num) << " � 16-�� ��)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		case 3:
			cout << "����� ����� ������ �������� �� 128 ?" << endl;
			cin >> hex >> num;
			cout << "-------------------------------------" << endl;
			cout << "              ���������              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " �������� ����� � 2-�� ��: " << bitset<12>(num) << "(" << hex << num << " � 16-�� ��)" << endl;
			cout << " ���������: " << bitset<12>(task3(num)) << "(" << hex << task3(num) << " � 16-�� ��)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		case 4:
			cout << "����� ����� ������ �������� �� 128 ?" << endl;
			cin >> hex >> num;
			cout << "-------------------------------------" << endl;
			cout << "              ���������              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " �������� ����� � 2-�� ��: " << bitset<12>(num) << "(" << hex << num << " � 16-�� ��)" << endl;
			cout << " ���������: " << bitset<12>(task4(num)) << "(" << hex << task4(num) << " � 16-�� ��)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		case 5:
			cout << "n-�� ��� ������ ����� ������ ���������� � 1 ?" << endl;
			cin >> hex >> num;
			cout << "����� ��� ������ ���������� � 1 ?" << endl;
			cin >> n;
			cout << "-------------------------------------" << endl;
			cout << "              ���������              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " �������� ����� � 2-�� ��: " << bitset<12>(num) << "(" << hex << num << " � 16-�� ��)" << endl;
			cout << " ���������: " << bitset<12>(task5(num, n)) << "(" << hex << task5(num, n) << " � 16-�� ��)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		}
	}
	return  0;
}