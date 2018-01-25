#include <iostream>
#include <fstream>
using namespace std;

class student{
public:
    char isim[15];
    ofstream outfile;
    ifstream infile;
    void yazma(){

        outfile.open("ogrenc.txt");

        cout<<"Yaz gelsin: ";

        outfile<<isim;


        infile.open("ogrenc.txt");
        kapama();


    };
    void kapama(){
        infile.close();
        outfile.close();
    };
    void okuma(){
        outfile.open();
        while(okuma>>isim){
            cout<<"Ogrenci ismi: "<<isim<<endl;
        }
        kapama();

   };
    void switchcase(){

    };
};



int main() {
    student yeni;
    yeni.yazma();
    getchar();
        return 0;
}