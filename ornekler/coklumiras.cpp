//--------ornek2: coklu-miras-oop------------------------------ 


#include <iostream>
using namespace std;

class X
{
 protected:
  int i,j;

 public:
 void get();
 void putx();

};


class Y : public X
{

 int k;
 public:
 int getk();
 void setk();

};

class Z: public Y
{
 public:
 void f();

};

int main(int argc, char* argv[])
{

Y y;   Z z;
y.get();
y.putx();

y.setk();
cout<<y.getk()<<endl;


z.f();
z.putx();

 getchar();
 getchar();
       
return 0;
}
//---------------------------------------------------------------------------
void X::get()
{
 cout<<"Iki sayi giriniz =";
 cin>>i>>j;
}

void X::putx()
{
 cout<<i<<"  "<<j<<endl;
}

int Y::getk()
{
return k;

}

void Y:: setk()
{
 k=i*j;

}

void Z::f()
{
 i=2;
 j=3;
}
//---------------------------------------------------------------------------