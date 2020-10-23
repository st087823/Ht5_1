#include <iostream>
#include <cstdlib> // system("pause");
#include"ArrayList.h"
#define N 10
using namespace std;

void meny() {
	cout << "0 - ¬ыйти из программы" << endl;
	cout << "1 - ƒобавить в список 10 случайных положительных двузначных чисел и вывести список" << endl;
	cout << "2 - ƒобавить в список 10 случайных отрицательных двузначных чисел и вывести список" << endl;
	cout << "3 - ѕомен€ть местами первый минимальный и последний максимальный элемент и вывести список" << endl;
	cout << "4 - ѕеремешать все элементы массива и вывести массив." << endl;
	cout << "5 - «аменить каждый отрицательный элемент массива на 0" << endl;
}

void check(ArrayList& a, int x) {
	if (x == 1) {
		for (int i = 0; i < 10; i++) 
		{
			a.add(rand() % 90 + 10);
			cout << a.toString() << endl;
		}
	}

	if (x == 2) {
		for (int i = 0; i < 10; i++) 
		{
			a.add(rand() % 90 - 100);
			cout << a.toString() << endl;
		}
	}
	if (x == 3) {
		int min = 1000;
		int index_min = 0;
		int max = -1000;
		int index_max = 0;
		for (int i = 0; i < a.length(); i++) 
		{
			if (a.get(i) > max) 
			{
				max = a.get(i);
				index_max = i;
			}
			if (a.get(i) < min) 
			{
				min = a.get(i);
				index_min = i;
			}
		}
		a.swap(index_min, index_max);
		cout << a.toString() << endl;
	}
	if (x == 4) {
		for (int i = 0; i < a.length(); i++) 
		{
			a.swap(i, rand() % a.length());
		}
		cout << a.toString() << endl;
	}
	if (x == 5) {
		for (int i = 0; i < a.length(); i++)
		{
			if (a.get(i) < 0)
			{
				a.set(i,0);
			}
		}
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	ArrayList a;
	int x = 1;
	int n = 0;

	while (x != 0) {
		system("cls");
		meny();
		cin >> x;
		check(a, x);
		system("pause");
	}
	return 0;
}