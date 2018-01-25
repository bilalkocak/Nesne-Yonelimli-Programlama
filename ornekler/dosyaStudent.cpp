//--------ornek7: dosya islemleri- student oop-------------------------------

#include<iostream.h>
#include<fstream.h>

class student
{
   public:
   
   char isim[15];
   void put();
   void get();
   void arama();
   void switchcase();
};

student s;


void main()
{
s.switchcase();
}

//-------------------------------------------

void student::put()
{

   ofstream yazma;
   cout<<"Isim giriniz: ";
   cin>>isim;

   yazma.open("ogrenci.txt",ios::app);

   yazma<<isim<<endl;
   yazma.close();
   s.switchcase();

}

void student::get()
{

   ifstream okuma;
   okuma.open("ogrenci.txt");


   while(okuma>>isim)
    {

    cout<<"ogrenci ismi:  "<<isim<<endl;

     }

    okuma.close();
    s.switchcase();

}

void student::arama()
{
   ifstream okuma;
   char ad[15];
   cout<<"Aramak istediginiz ismi giriniz = ";
   cin>>ad;

   okuma.open("ogrenci.txt",ios::in);


   while(!okuma.eof())
    {
     okuma>>isim;

    if(strcmp(isim,ad))
    {
    cout<<"bulundu";// imlec konumu   "<<okuma.tellg()<<endl;
    break;
    }
   }

    okuma.close();
    s.switchcase();


}

void student::switchcase()
{
    int i;
    cout<<"Seciminizi giriniz (1-yazma, 2-okuma, 3-arama 4-cikis): ";
    cin>>i;

    switch(i)
    {
    case 1:
	  s.put();
	  break;

    case 2:
	  s.get();
	  break;

    case 3:
          s.arama();
          break;
    case 4:
	  exit(0);

    default:
	  cout<<"yanlis secim ";
    }
}


//-------------------------------------------------------------------------------
