#include <iostream>


using namespace std;

class alan
{
	int  a,b,c;
	public:
	double alanhesapla(int,int,int);
	//alan(double,double,double);
	
};
int main()
{
	alan u;
	cout<<u.alanhesapla(3,3,1);
}
double alan::alanhesapla(int a,int b,int c)
{
	//double s;
	switch(c)
	{
		case 1:  	return a*a;			break;		
		case 2: 	return a*a;			break;		
		case 3: 	return (a*b)/2;		break;		
		case 4: 	return 3.14*a*a;	break;
	}
	
}
