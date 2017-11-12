#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class X {
public:
	int x, y;
	void degiskenAl() {
		cout << "Bir sayi giriniz: ";
		cin >> x;
		cout << "Bir sayi giriniz: ";
		cin >> y;
	}
	void ekranaYaz() {
		cout << "Girdiginiz degiskenler: " << endl << "x = " << x << endl << "y = " << y << endl;
	}

};

class Y :public X {
public:
	int k;
	int d() {
		return k;
	}
	void atama() {
		k = x*y;
		cout << "Degerlerin carpimi: " << k;
	}
};

class Z : public Y {
public:
	void set(int a, int b) {
		x = a;
		y = b;
	}
};

int main()
{
	X a;
	Y b;
	Z c;
	a.degiskenAl();
	a.ekranaYaz();
	cout << a.x;
	c.set(7, 5);
	c.atama();
	cout << endl;
}