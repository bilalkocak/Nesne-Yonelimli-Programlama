//--------ornek1: bolum-ogrenci-miras-oop------------------------------


#include <iostream>
using namespace std;

class insan
{
public:
char * isim;
char * soyisim;
double boy;
double kilo;
int yas;

};

class bolum
{
public:
char isim[25];
int derssayisi;
char bina[30];

};

class ogrenci:public insan
{
public:
 int ogrencino; //char ogrno[]
 bolum *b;      //b

};

int main(int argc, char* argv[])
{
ogrenci *ahmet=new ogrenci();
insan *veli=new insan();

ahmet->boy=1.60;
ahmet->kilo=60.4;
ahmet->yas=25;

(*ahmet).ogrencino=250145;

veli->boy=1.70;
veli->kilo=78;
veli->yas=21;

bolum *yaz=new bolum();
strcpy(yaz->isim,"yazilim muhendisligi");
yaz->derssayisi=65;
strcpy(yaz->bina,"of teknoloji fak bina");

ahmet->b=yaz;

cout<<"ahmet boy  "<< ahmet->boy<<endl;
cout<<"ahmet kilo  "<< ahmet->kilo<<endl;
cout<<"ahmet yas  "<< ahmet->yas<<endl;
cout<<"ahmet adres  "<< (ahmet->b)->bina<<endl;
cout<<"ahmet bolum  "<< (ahmet->b)->isim<<endl;

getchar();
getchar();
        return 0;
}
//-------------------------------------------------------------