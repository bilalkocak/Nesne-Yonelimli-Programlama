#include <iostream>
#include <cstring>

using namespace std;

class ComplexT{
    double re,im;
public:
    ComplexT(double re_in=0, double im_in=1);
    ComplexT operator+(ComplexT&);
    void goster();
};

ComplexT ComplexT::operator+(ComplexT &c) {
    double yeni_re,yeni_im;
    yeni_re=re+c.re;
    yeni_im=c.im;
    return ComplexT(yeni_re,yeni_im);
}

void ComplexT::goster() {
    cout<<endl<<"re="<<re<<"im="<<im;

}

ComplexT::ComplexT(double re_in, double im_in) {
    re=re_in;
    im=im_in;
    cout<<endl<<"Varsayilan Constructor";
}


int main() {

    ComplexT z1(1,1),z2(2,2),z3;
    z3=z1+z2; //z3=z1.operator+(z2);
    z3.goster();
    return 0;
}
