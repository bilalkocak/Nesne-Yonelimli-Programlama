#include <iostream>
using namespace std;

class silindir{
    double pi=3.14;
    public:
    double r;
    double h;

    double hacimHesapla();
    void oku();
};

double silindir::hacimHesapla() {
    double hacim;
    hacim=pi*r*r*h;
    return hacim;
}

void silindir::oku() {
    cout<<"yari cap: ";
    cin>>r;
    cout<<"yukseklik: ";
    cin>>h;
}


int main() {
    silindir yeni;
    yeni.oku();

    cout<<yeni.hacimHesapla();

    return 0;
}
