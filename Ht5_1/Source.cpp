#include <iostream>
#include <cstdlib> // system("pause");
#include"ArrayList.h"
#define N 10
using namespace std;

void meny() {
	cout << "0 - ����� �� ���������" << endl;
	cout << "1 - �������� � ������ 10 ��������� ������������� ���������� ����� � ������� ������" << endl;
	cout << "2 - �������� � ������ 10 ��������� ������������� ���������� ����� � ������� ������" << endl;
	cout << "3 - �������� ������� ������ ����������� � ��������� ������������ ������� � ������� ������" << endl;
	cout << "4 - ���������� ��� �������� ������� � ������� ������." << endl;
	cout << "5 - �������� ������ ������������� ������� ������� �� 0" << endl;
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
		int minindex = 0;
		int maxindex = 0;
		for (int i = 0; i < a.length(); ++i)
		{
			if (a.get(i) < a.get(minindex))
			{
				minindex = i;
			}
			if (a.get(i) >= a.get(maxindex))
			{
				maxindex = i;
			}
		}
		a.swap(minindex, maxindex);
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