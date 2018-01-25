//--------ornek5: dosya islemleri-not ortalama hesaplama, dosya kopyalama----------------------------------- 

#include <iostream>
#include <fstream>

using namespace std;
 
int main ()
{

   char data[100];
   int x;
   float t,y;

   ofstream outfile,o2;
   ifstream infile;

   outfile.open("file.txt");

   for(int i=0;i<5;i++)
   {
   cout << "No giriniz: ";
   cin >> x;
   cout << "Notu giriniz: ";
   cin>> y;
   cout<<endl;
   outfile << x <<" "<< y<< endl;
   }


   infile.open("file.txt");
   o2.open("file2.txt");

   cout << "Dosyadan okuma" << endl;

   t=0;
   for(int i=0;i<5;i++)
   {
   infile >> x >>y;
   cout<<y<<endl;
   o2<<x<<" "<<y<<endl;  //dosyanin kopyasini olusturma
   t+=y;
   }
   t/=5;
   cout <<endl<<"ortalama "<< t << endl;



   infile.close();
   outfile.close();
   o2.close();

   cin>>x;

   return 0;
}

//--------------------------------------------------------------------------------------------