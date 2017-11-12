#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class sekil {
public:
	int x, y;
	void set(int, int);
	virtual void alanHesaplama() {
		cout << "Ana sinifta hesaplama yok \n";
	}
};

class ucgen : public sekil {
	void alanHesaplama() {
		cout << "Ucgen alani: " << x*y*0.5 << endl;
	}
};

class kare :public sekil {
	void alanHesaplama() {
		cout << "Karenin alani: " << x*y << endl;
	}

};

int main()
{
	sekil *p;
	p = new sekil;
	p->set(2, 3);
	p->alanHesaplama();
	ucgen u;
	kare k;
	p = &u;
	p->set(5, 6);
	p->alanHesaplama();
	p = &k;
	p->set(5, 4);
	p->alanHesaplama();
}

void sekil::set(int a, int b) {
	x = a;
	y = b;
}