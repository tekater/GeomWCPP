#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	//srand(time(NULL));
	int length = 16;
	string input;
	cout << "Введите букву\nA B C D E F G H I J\na b c d e f g h i j\n";
	cin >> input;
	int num = 0;
	if (input == "A" || input == "a") {
		num = 1;
	}
	if (input == "B" || input == "b") {
		num = 2;
	}
	if (input == "C" || input == "c") {
		num = 3;
	}
	if (input == "D" || input == "d") {
		num = 4;
	}
	if (input == "E" || input == "e") {
		num = 5;
	}
	if (input == "F" || input == "f") {
		num = 6;
	}
	if (input == "G" || input == "g") {
		num = 7;
	}
	if (input == "H" || input == "h") {
		num = 8;
	}
	if (input == "I" || input == "i") {
		num = 9;
	}
	if (input == "J" || input == "j") {
		num = 10;
	}

	switch (num) {
	case 1:
		system("cls");
		cout << "A\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i > j) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case 2:
		system("cls");
		cout << "B\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i > j) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
			cout << endl;
		}
		break;
	case 3:
		system("cls");
		cout << "C\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i < j && i + j < length)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		break;
	case 4:
		system("cls");
		cout << "D\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i >= j && i + j >= length)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		break;
	case 5:
		system("cls");
		cout << "E\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i >= j && i + j >= length || i <= j && i + j <= length) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 6:
		system("cls");
		cout << "F\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i >= j && i + j >= length || i <= j && i + j <= length) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
			cout << endl;
		}
		break;
	case 7:
		system("cls");
		cout << "G\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i >= j && i + j >= length || i <= j) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
			cout << endl;
		}

		break;
	case 8:
		system("cls");
		cout << "H\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i <= j && i + j <= length || i >= j) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
			cout << endl;
		}
		break;
	case 9:
		system("cls");
		cout << "I\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i + j >= length) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
			cout << endl;
		}
		break;
	case 10:
		system("cls");
		cout << "J\n";
		for (int i = 0; i <= length; i++)
		{
			for (int j = 0; j <= length; j++)
			{
				if (i + j <= length) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
			cout << endl;
		}
		break;
	}
}
