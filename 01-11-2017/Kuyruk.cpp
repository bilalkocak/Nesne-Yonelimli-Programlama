#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class kuyruk {
public:
	int d[100];
	int bh, sh;
	kuyruk();
	~kuyruk();
	void elemanEkle(int);
	void goster(int);


};

int main()
{
	kuyruk k;
	k.elemanEkle(5);
	k.elemanEkle(4);
	k.elemanEkle(3);
	k.elemanEkle(2);
	k.goster(3);
	for (int i = 0; i < 5; i++)
	{
		cout << k.d[i] << endl;
	}
	cout << endl;
	k.goster(3);

}

kuyruk::kuyruk() {
	bh = 0;
	sh = 0;
}

kuyruk::~kuyruk() {
	delete[]d;
}

void kuyruk::elemanEkle(int a) {
	if (sh == 99)
		return;
	d[sh] = a;
	sh++;
}

void kuyruk::goster(int i) {
	cout << d[i - 1] << endl;
}
