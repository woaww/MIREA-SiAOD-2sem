#include <iostream>
#include <vector>

using namespace std;

unsigned char bitSort(vector<int> numbers) {
	unsigned char bitSub = 0;
	for (unsigned int num : numbers) {
		bitSub |= (1 << num);
	}
	return bitSub;
}

int main() {
	setlocale(LC_ALL, "Rus");

	vector <int> numbers;
	int num, n = 1;
	cout << "Последовательно введите элементы массива (не более 7 чисел от 0 до 7; -1 - конец массива): ";
	while (n <= 7) {
		cin >> num;
		if (num >= 7) {
			cout << "Введенное число больше 7 :(( Повторите попытку";
		}
		else if (num == -1) {
			break;
		}
		else {
			numbers.push_back(num);
			n++;
		}
	}

	unsigned char bitSub = bitSort(numbers);
	for (int i = 0; i < numbers.size(); i++) {
		if (bitSub & (1 << i)) {
			cout << i << " ";
		}
	}
	return 0;
}