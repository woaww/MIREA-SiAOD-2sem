#include <iostream>
#include <fstream>
#include <vector>
#include <bitset>
#include <chrono>
#include <Windows.h>

using namespace std;

const int MAX_LEN = 1000000;
const string INPUT_PATH = "inputFile.txt";
const string OUTPUT_PATH = "outputFile.txt";
const string TEST_INPUT_PATH = "testInputFile.txt";
const string TEST_OUTPUT_PATH = "testOutputFile.txt";

void createFile(int size) {
	vector<int> array;
	for (int i = 0; i < size; i++) {
		array.push_back(i);
	}

	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		swap(array[i], array[rand() % size]);
	}
	
	ofstream file;
	file.open(INPUT_PATH);
	if (!file.is_open()) {
		cout << "������ �������� ����� :((" << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			file << array[i] << endl;
		}
	}
	file.close();
}

void createTestFile() {
	int n;
	
	ofstream file;
	file.open(TEST_INPUT_PATH);
	if (!file.is_open()) {
		cout << "������ �������� ����� :((" << endl;
	}
	else {
		cout << "��������������� ������� �������� �������: " << endl;
		for (int i = 0; i < 20; i++) {
			cin >> n;
			file << n << endl;
		}
	}
	file.close();

}

void bitSort(string input, string output) {
	vector <bool> bitArr(false);
	int n;
	
	ifstream inputFile;
	inputFile.open(input);

	if (!inputFile.is_open()) {
		cout << "������ �������� ���� :((" << endl;
	}
	else {
		while (inputFile >> n) {
			bitArr.resize(max(bitArr.size(), n + 1));
			bitArr[n] = true;
		}
	}
	inputFile.close();

	ofstream outputFile;
	outputFile.open(output);
	for (int i = 0; i < bitArr.size(); i++) {
		if (bitArr[i]) {
			outputFile << i << "\n";
		}
	}
	outputFile.close();

	cout << "����� ������, ���������� ������� ��������: " << bitArr.capacity() / (1024 * 1024) << " ��" << "(" << bitArr.capacity() << " ����)" << endl;
}

int main() {
	setlocale(LC_ALL, "Rus");

	int operation = -1, start, stop, res;
	auto resTime = chrono::steady_clock::now(), start = chrono::steady_clock::now(), end = chrono::steady_clock::now();

	while (operation != 0) {
		cout << "============== � � � � ==============" << endl;
		cout << " 1 - ������� ���� � ����������� ���������� ����������� ����� � �������������" << endl;
		cout << " 2 - ������� ���� �� 100 ����� � �������������" << endl;
		cout << " 3 - ������� ���� �� 1000 ����� � �������������" << endl;
		cout << " 4 - ������� �������� ���� (20 �����) � �������������" << endl;
		cout << " 0 - ����� �� ���������" << endl;
		cout << "-------------------------------------" << endl;
		cout << " �����: ";
		cin >> operation;
		cout << "=====================================" << endl;

		switch (operation) {
		case 1:
			createFile(MAX_LEN);
			start = chrono::steady_clock::now();
			bitSort(INPUT_PATH, OUTPUT_PATH);
			end = chrono::steady_clock::now();
			cout << "V - ���� ������������ :))" << endl;
			break;
		case 2:
			createFile(100);
			bitSort(INPUT_PATH, OUTPUT_PATH);
			cout << "V - ���� ������������ :))" << endl;
			break;
		case 3:
			createFile(1000);
			bitSort(INPUT_PATH, OUTPUT_PATH);
			cout << "V - ���� ������������ :))" << endl;
			break;
		case 4:
			createTestFile();
			bitSort(TEST_INPUT_PATH, TEST_OUTPUT_PATH);
			break;
		}
	}

	return 0;
}