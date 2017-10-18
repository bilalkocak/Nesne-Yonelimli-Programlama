#include <iostream>
using namespace std;

class dizi{

public:
    int dizi[10];
    void degerOku();
    void sirala();
    void degistir(int a,int b);
};

void dizi::degerOku() {
    for (int i = 0; i < 10; ++i) {
        cout<<"Deger gir";
        cin>>dizi[i];
    }
}

void dizi::sirala() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (dizi[i]>dizi[j]){
                int temp;
                temp=dizi[j];
                dizi[j]=dizi[i];
                dizi[i]=temp;
            }
        }
    }

}

void dizi::degistir(int a, int b) {
    int temp;
    for (int i = 0; i < 10; ++i) {
        if(dizi[i]==a) {
            dizi[i]=b;
        }
    }
    for (int j = 0; j <10 ; ++j) {
        cout<<dizi[j]<<endl;
    }
}


int main() {
    dizi dizi1;

    dizi1.degerOku();
    dizi1.sirala();
    cout<<"******";
    dizi1.degistir(5,10);
    dizi1.sirala();
    cout<<"******";


    return 0;
}
