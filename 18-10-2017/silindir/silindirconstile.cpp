#include <iostream>
using namespace std;

class silindir{
    double pi=3.14;
    public:
    double r;
    double h;

    silindir(double r, double h);
    double hacimHesapla();

};
silindir::silindir(double r, double h) {
    this->r=r;
    this->h=h;
}
double silindir::hacimHesapla() {
    double hacim;
    hacim=pi*r*r*h;
    return hacim;
}




int main() {
    silindir yeni(1,2);



    cout<<yeni.hacimHesapla();

    return 0;
}
