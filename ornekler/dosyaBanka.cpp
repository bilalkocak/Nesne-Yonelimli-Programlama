
//--------ornek8: dosya islemleri- banka islem oop-------------------------------

#include <iostream>
#include <fstream>

using namespace std;


class hesap
{
public:
 string hsismi;
 int hesapno;
 float bakiye;
 int hesapturu;
 hesap();
 void parayatir(int hesapno,float para);
 void paracek(int hesapno,float para);
 void bilgigoruntule(int hesapno);
 friend void hesapekle(void);

};

hesap bir;

void main ()
{

  float para;
  char c;

  hesapekle();

  while(true)
  {
  cout<<"Banka islemlerine hosgeldiniz:"<<endl<<endl;
  cout<<"Lutfen islem yapmak istediginiz secenegi belirleyiniz:"<<endl<<endl;
  cout<<"Para yatirma -> 1"<<endl;
  cout<<"Para cekme -> 2"<<endl;
  cout<<"Bakiye goruntuleme -> 3"<<endl;
  cout<<"Cikis -> 4"<<endl<<endl;

  cin>>c;

  switch(c)
  {
     case '1': cout<<endl<<"Yatirilacak miktari giriniz : "; cin>>para;
               cout<<endl<<"Hesap noyu giriniz : ";cin>>bir.hesapno;

               bir.parayatir(bir.hesapno,para); break;

     case '2': cout<<endl<<"Cekilecek miktari giriniz : "; cin>>para;
               cout<<endl<<"Hesap noyu giriniz : ";cin>>bir.hesapno;

               bir.paracek(bir.hesapno,para); break;

     case '3': cout<<"Goruntulemek istediginiz hesap noyu giriniz :";
               cin>>bir.hesapno;
               bir.bilgigoruntule(bir.hesapno); break;

     case '4': exit(0); break;

     default: cout<<"yanlis secim"; break;

   }
  }


}

//------------------------------------------------------------------------------

hesap::hesap()
{
 bakiye=0.0;
}

//------------------------------------------------------------------------------

void hesap::parayatir(int hesapno,float para)
{
  ifstream oku;
  ofstream yaz;

  oku.open("banka.txt",ios::in);
  yaz.open("bankaguncel.txt");

  if(!oku.is_open() || !yaz.is_open())
   cout<<"dosya acilamiyor"<<endl;


   while(!oku.eof())
   {

    oku>>bir.hesapno>>bir.hsismi>>bir.bakiye>>bir.hesapturu;

    cout<<bir.hesapno<<" "<<bir.hsismi<<" "<<bir.bakiye<<" "<<bir.hesapturu<<endl;

    if(hesapno==bir.hesapno)
     {
     bir.bakiye=bir.bakiye+para;
     yaz<<bir.hesapno<<" "<<bir.hsismi<<" "<< bir.bakiye<<" "<<bir.hesapturu<<'\n';
     }
     else
     yaz<<bir.hesapno<<" "<<bir.hsismi<<" "<< bir.bakiye<<" "<<bir.hesapturu<<'\n';

    }

   oku.close();
   yaz.close();

   remove("banka.txt");
   rename("bankaguncel.txt","banka.txt");

}

//------------------------------------------------------------------------------


void hesap::paracek(int hesapno,float para)
{
  ifstream oku;
  ofstream yaz;

  oku.open("banka.txt",ios::in);
  yaz.open("bankaguncel.txt",ios::out);


  if(!oku.is_open())
     cout<<"oku dosya acilamiyor"<<endl;

  if(!yaz.is_open())
    cout<<"yaz dosya acilamiyor"<<endl;

   while(!oku.eof())
   {
    oku>>bir.hesapno>>bir.hsismi>>bir.bakiye>>bir.hesapturu;


    if(hesapno==bir.hesapno && bir.bakiye-para < 0)
     {
       cout<<endl<<"Yetersiz bakiye."<<endl<<endl;
       yaz.close();
       yaz.open("bankaguncel.txt",ios::out);
       break;
     }
     else if(hesapno==bir.hesapno && bir.bakiye-para >= 0)
      {
       bir.bakiye=bir.bakiye-para;
       yaz<<bir.hesapno<<" "<<bir.hsismi<<" "<< bir.bakiye<<" "<<bir.hesapturu<<'\n';
      }

      if(hesapno!=bir.hesapno)
       yaz<<bir.hesapno<<" "<<bir.hsismi<<" "<< bir.bakiye<<" "<<bir.hesapturu<<'\n';
   }


   oku.close();
   yaz.close();

   remove("banka.txt");
   rename("bankaguncel.txt","banka.txt");
}

//------------------------------------------------------------------------------

void hesap::bilgigoruntule(int hesapno)
{
   ifstream oku;
   ofstream yaz;

   oku.open("banka.txt",ios::in);

  if(!oku.is_open())
   cout<<"dosya acilamiyor"<<endl;

   while(!oku.eof())
   {

    oku>>bir.hesapno>>bir.hsismi>>bir.bakiye>>bir.hesapturu;

    if(hesapno==bir.hesapno)
     {
      cout<<bir.hesapno<<" "<<bir.hsismi<<" "<<bir.bakiye<<" "<<bir.hesapturu<<endl;
      break;
      }

   }
  oku.close();

}

//-----------------------------------------------------------------------------
void hesapekle(void)
{
  ofstream yaz;
  char k;

  yaz.open("banka.txt",ios::app);

  if(!yaz.is_open())
   cout<<"dosya acilamiyor"<<endl;

   while(true)
   {

 s1: cout<<endl<<"Hesap eklemek icin e ye , cikis icin c ye basiniz = ";
     cin>>k;

   if(k=='c')
    break;

    if(k=='e')
    {
   cout<<endl<<"Eklenecek hesapno = ";
   cin>>bir.hesapno;//=123;

   cout<<endl<<"Eklenecek hesabin hesap ismi = ";
   cin>>bir.hsismi;//="selda";

   cout<<endl<<"Eklenecek hesap bakiyesi = ";
   cin>>bir.bakiye;//=200;

   cout<<endl<<"Eklenecek hesap turu (vadeli 0, vadesiz 1) = ";
   cin>>bir.hesapturu;//=0;

   yaz<<endl<<bir.hesapno<< " "<<bir.hsismi<< " "<< bir.bakiye<<" "<<bir.hesapturu;
    }
    else
     {
     cout<<endl<<"Yanlis karaktere bastiniz."<<endl;
     goto s1;
     }
  }

   yaz.close();
}
//-----------------------------------------------------------------------------------------
