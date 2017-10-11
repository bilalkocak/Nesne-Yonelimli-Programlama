#include <iostream>
using  namespace std;

struct ogrenci{
    string adi;
    string soyadi;
    int notu;
};

int main() { 
    ogrenci d[3];

    d[0].adi="A";
    d[0].soyadi="a";
    d[0].notu=19;

    d[1].adi="B";
    d[1].soyadi="b";
    d[1].notu=89;

    d[2].adi="C";
    d[2].soyadi="c";
    d[2].notu=95;

    for (int i = 0; i < 3; ++i) {
        if(d[i].notu>80){
            cout<<d[i].adi<<" "<<d[i].soyadi<<endl;
        }
    }
}
