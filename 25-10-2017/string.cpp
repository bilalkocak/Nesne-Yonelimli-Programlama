#include <iostream>
#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class String
{
	int boy;
	char*icerik;
	public:
	String(char *);
	void goster();
	~String();	
};
int main()
{
	String string1("String 1");
	String string2("String 2");
	string1.goster();
	string2.goster();
	string1.~String();
	string2.~String();
}
String::String(char *gelenveri)
{
	cout<<"Kurucu calisti"<<endl;
	boy=strlen(gelenveri);
	icerik=new char[boy+1];
	strcpy(icerik,gelenveri);
}
void String::goster()
{
	cout<<icerik<<","<<boy<<endl;
}
String::~String()
{
	cout<<"Yok edici calisti"<<endl;
	delete[]icerik;
}