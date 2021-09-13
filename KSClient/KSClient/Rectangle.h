#pragma once
#include <iostream>

using namespace std;

class Rectangle
{
private:
	int ax, ay, bx, by;
public:
	void SetRectangle()
	{
		cout << "Введите значение X верхнего правого угла области: ";
		cin >> ax;
		cout << "\nВведите значение Y верхнего правого угла области: ";
		cin >> ay;
		cout << "Введите значение X нижнего левого угла области: ";
		cin >> bx;
		cout << "Введите значение X нижнего левого угла области: ";
		cin >> by;
	}
	int GetAX() {
		return ax;
	}
	int GetAY() {
		return ay;
	}
	int GetBX() {
		return bx;
	}
	int GetBY() {
		return by;
	}
};