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
		cout << "������� �������� X �������� ������� ���� �������: ";
		cin >> ax;
		cout << "\n������� �������� Y �������� ������� ���� �������: ";
		cin >> ay;
		cout << "������� �������� X ������� ������ ���� �������: ";
		cin >> bx;
		cout << "������� �������� X ������� ������ ���� �������: ";
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