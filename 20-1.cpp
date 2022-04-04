#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//������� ���� ������ �� �����
template <typename T> void showArray(T array[], int length) { 
	for (int i = 0; i < length; i++) {
		cout << array[i] << " ";
	}
}

//������ ������� ��������� �������� �������
template <typename T> int  searchIndex(T array[], int length, T N, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (array[i] == N)
			return i;
	return -1;
}

//������ ���������� ��������� �������� �������
template <typename T> int searchLastIndex(T array[], int length, T N, int begin = 0) {
	for (int i = length - 1; i > begin; i--)
		if (array[i] == N)
			return i;
	return -1;
}

//������������ ������� �������
template <typename T> T maxElement(T array[], int length) {
	int max = array[0];
	for (int i = 1; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
	
}

//����������� ������� �������
template <typename T> T minElement(T array[], int length) {
	int min = array[0];
	for (int i = 1; i < length; i++)
		if (array[i] < min)
			min = array[i];
	return min;
}

//������� �������������� ���� ��������� �������
template <typename T> double meanValue(T array[], int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}

//�������� ������� � �������� ���������
template <typename T> void range(T array[], int length, T A, T B) {
	for (int i = 0; i < length; i++)
		if (array[i] > A && array[i] < B)
			cout << array[i] << " ";
}

//���������� ��������� ����������� �������� � ������
template <typename T> int counter(T array[], int length, T num) {
	int N = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] == num)
			N++;
	}
	return N;
}


int main(void) {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int mas[100];

	for (int i = 0; i < 100; i++) {
		mas[i] = rand() % (100 + 1 - (-100)) + (-100);
	}

	cout << "������: ";
	showArray(mas, 100);
	cout << endl << endl;

	cout << "������ ������� ��������� �������� 44 � ������ (-1 - �����������): ";
	cout << searchIndex(mas, 100, 44) << endl << endl;

	cout << "������ ���������� ��������� �������� -100 � ������ (-1 - �����������): ";
	cout << searchLastIndex(mas, 100, -100) << endl << endl;

	cout << "������������ ������� �������: ";
	cout << maxElement(mas, 100) << endl << endl;

	cout << "����������� ������� �������: ";
	cout << minElement(mas, 100) << endl << endl;

	cout << "������� �������������� ���� ��������� �������: ";
	cout << meanValue(mas, 100) << endl << endl;

	cout << "��� �������� ������� � ��������� �� 30 �� 50: ";
	range(mas, 100, 30, 50);
	cout << endl << endl;

	cout << "���������� ��������� �������� 100 � ������: ";
	cout << counter(mas, 100, 100) << endl << endl;

	return 0;
}