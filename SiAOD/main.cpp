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
		cout << "============== М Е Н Ю ==============" << endl;
		cout << "   Выберите номер задания  (1 - 5)   " << endl;
		cout << "   0 - Выход из программы" << endl;
		cout << "-------------------------------------" << endl;
		cout << " Ответ: ";
		cin >> taskNum;
		cout << "=====================================" << endl;

		switch (taskNum) {
		case 1:
			num = 0xA7;
			cout << "-------------------------------------" << endl;
			cout << "              Результат              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " Исходное число в 2-ой СС: " << bitset<12>(num) << "(" << hex << num << " в 16-ой СС)" << endl;
			cout << " Результат: " << bitset<12>(task1(num)) << "(" << hex << task1(num) << " в 16-ой СС)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		case 2:
			cout << "9, 11 и 3 биты какого числа хотите обунлить ?" << endl;
			cin >> hex >> num;
			cout << "-------------------------------------" << endl;
			cout << "              Результат              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " Исходное число в 2-ой СС: " << bitset<12>(num) << "(" << hex << num << " в 16-ой СС)" << endl;
			cout << " Результат: " << bitset<12>(task2(num)) << "(" << hex << task2(num) << " в 16-ой СС)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		case 3:
			cout << "Какое число хотите умножить на 128 ?" << endl;
			cin >> hex >> num;
			cout << "-------------------------------------" << endl;
			cout << "              Результат              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " Исходное число в 2-ой СС: " << bitset<12>(num) << "(" << hex << num << " в 16-ой СС)" << endl;
			cout << " Результат: " << bitset<12>(task3(num)) << "(" << hex << task3(num) << " в 16-ой СС)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		case 4:
			cout << "Какое число хотите поделить на 128 ?" << endl;
			cin >> hex >> num;
			cout << "-------------------------------------" << endl;
			cout << "              Результат              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " Исходное число в 2-ой СС: " << bitset<12>(num) << "(" << hex << num << " в 16-ой СС)" << endl;
			cout << " Результат: " << bitset<12>(task4(num)) << "(" << hex << task4(num) << " в 16-ой СС)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		case 5:
			cout << "n-ый бит какого числа хотите установить в 1 ?" << endl;
			cin >> hex >> num;
			cout << "Какой бит хотите уствновить в 1 ?" << endl;
			cin >> n;
			cout << "-------------------------------------" << endl;
			cout << "              Результат              " << endl;
			cout << "-------------------------------------" << endl;
			cout << " Исходное число в 2-ой СС: " << bitset<12>(num) << "(" << hex << num << " в 16-ой СС)" << endl;
			cout << " Результат: " << bitset<12>(task5(num, n)) << "(" << hex << task5(num, n) << " в 16-ой СС)" << endl;
			cout << "=====================================" << endl << endl;;
			break;
		}
	}
	return  0;
}