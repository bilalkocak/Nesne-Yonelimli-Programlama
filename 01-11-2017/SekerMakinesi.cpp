

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class sm {
private:
	int seker, tp;
public:
	int ucret;
	sm(int, int);
	bool sekerVer();
	int tpucret();
};

int main()
{
	char c;
	sm makine(5, 5);
	s2: cout << "Islem icin 's' ye basiniz: ";
	cin >> c;
	if (c == 's') {
		cout << makine.ucret << " TL ucreti giriniz" << endl;
		s1: cout << "g ye basiniz: ";
		cin >> c;
		if (c == 'g') {
			if (makine.sekerVer())
				cout << makine.tpucret();
			goto s2;
		}
		else
			goto s1;
	}
}

sm::sm(int a, int b) {
	seker = a;
	ucret = b;
	tp = 0;

}

bool sm::sekerVer() {
	if (seker > 0) {
		seker--;
		cout << "Urun verilmistir. " << seker << " adet kalmistir." << endl;
		return true;
	}
	else
		cout << "Urun tukenmistir."; return false;
}

int sm::tpucret() {
	tp += ucret;
	return tp;
}
