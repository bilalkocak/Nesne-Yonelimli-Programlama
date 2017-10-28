#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int * degeral(int *p,int a);
void sirala(int *p,int);

int main()
{
	int a;
	int *p;
	int *q;
	cout<<"Dizi boyutunu giriniz..: ";
	cin>>a;
	p=new int[a];
	cout<<"Dizinin degerlerini giriniz..: ";
	q=p;
	
	q=degeral(p,a);
	sirala(p,a);
}
/*
void degeral(int *p,int a)
{
	for(int i=0;i<a;i++)
	{
		cin>>*p;
		p++;
	}
}
*/
int * degeral(int *p,int a)
{
	for(int i=0;i<a;i++)
	{
		cin>>*p;
		p++;
	}
	return p;
}
void sirala(int *p,int a)
{
	for(int i=0;i<a;i++)
	{
	cout<<" "<<*p;
	p++;
	}
}
