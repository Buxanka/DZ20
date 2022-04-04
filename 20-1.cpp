#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Выводит весь массив на экран
template <typename T> void showArray(T array[], int length) { 
	for (int i = 0; i < length; i++) {
		cout << array[i] << " ";
	}
}

//Индекс первого вхождения элемента массива
template <typename T> int  searchIndex(T array[], int length, T N, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (array[i] == N)
			return i;
	return -1;
}

//Индекс последнего вхождения элемента массива
template <typename T> int searchLastIndex(T array[], int length, T N, int begin = 0) {
	for (int i = length - 1; i > begin; i--)
		if (array[i] == N)
			return i;
	return -1;
}

//Максимальный элемент массива
template <typename T> T maxElement(T array[], int length) {
	int max = array[0];
	for (int i = 1; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
	
}

//Минимальный элемент массива
template <typename T> T minElement(T array[], int length) {
	int min = array[0];
	for (int i = 1; i < length; i++)
		if (array[i] < min)
			min = array[i];
	return min;
}

//Среднее арифметическое всех элементов массива
template <typename T> double meanValue(T array[], int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}

//Элементы массива в заданном диапазоне
template <typename T> void range(T array[], int length, T A, T B) {
	for (int i = 0; i < length; i++)
		if (array[i] > A && array[i] < B)
			cout << array[i] << " ";
}

//Количество вхождений переданного элемента в массив
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

	cout << "Массив: ";
	showArray(mas, 100);
	cout << endl << endl;

	cout << "Индекс первого вхождения элемента 44 в массив (-1 - отсутствует): ";
	cout << searchIndex(mas, 100, 44) << endl << endl;

	cout << "Индекс последнего вхождения элемента -100 в массив (-1 - отсутствует): ";
	cout << searchLastIndex(mas, 100, -100) << endl << endl;

	cout << "Максимальный элемент массива: ";
	cout << maxElement(mas, 100) << endl << endl;

	cout << "Минимальный элемент массива: ";
	cout << minElement(mas, 100) << endl << endl;

	cout << "Среднее арифметическое всех элементов массива: ";
	cout << meanValue(mas, 100) << endl << endl;

	cout << "Все элементы массива в диапозоне от 30 до 50: ";
	range(mas, 100, 30, 50);
	cout << endl << endl;

	cout << "Количество вхождений элемента 100 в массив: ";
	cout << counter(mas, 100, 100) << endl << endl;

	return 0;
}