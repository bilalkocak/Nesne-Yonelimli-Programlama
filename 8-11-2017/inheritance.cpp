#include "stdafx.h"
#include <iostream>

using namespace std;

class baseClass {

public:
	virtual void print();
	baseClass(int u = 0);
private:
	int x;
};

void baseClass::print() {
	cout << "In baseClass x = " << x << endl;
}

baseClass::baseClass(int u) {
	x = u;
}


class derivedClass : public baseClass {

public:
	void print();
	derivedClass(int u = 0, int v = 0);
private:
	int a;
};

void derivedClass::print() {
	cout << "In derivedClass: ";
	baseClass::print();
	cout << "In derivedClass a = " << a << endl;
}

derivedClass::derivedClass(int u, int v) : baseClass(u) {
	a = v;
}

void callPrint(baseClass& p) {
	p.print();
}

int main()
{
	baseClass one(5);
	derivedClass two(3, 15);
	one.print();
	two.print();
	cout << "*** Calling the function " << "callPrint ***" << endl;
	callPrint(one);
	callPrint(two);
}