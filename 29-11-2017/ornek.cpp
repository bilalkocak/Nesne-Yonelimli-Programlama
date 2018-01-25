using namespace std;


class x {
    protected:
    int i,j;

    public:
    x(int a,int b){
        i=a;
        j=b;
        
    };#include <iostream>

using namespace std;

class X {
protected:
    int i, j;
public:
    X(int a, int b) {
        i = a;
        j = b;
    }
    void get();
    void putx();
};

class Y :public X {
    int k;
public:
    Y(int c, int a, int b) :X(a, b) { k = c; }
    int getk();
    void setk();
};

class Z : public Y {
public:
    Z(int a, int b, int c) :Y(a, b, c) {

    }
    void f();
};

void X::get() {
    cout << "Iki sayi giriniz: ";
    cin >> i >> j;
}

void X::putx() {
    cout << i << " " << j << endl;
}

int Y::getk() {
    return k;
}

void Y::setk() {
    k = i*j;
}

void Z::f() {
    i = 2;
    j = 3;
}

int main()
{
    X x(78, 89);
    Y y(3, 5, 6);
    cout << y.getk() << endl;
    x.putx();
    y.putx();
    Z z(4, 7, 8);
    y.putx();

}
    void get();
    void putx();
};

class y:public x{
    int k;
    public:
    y(int c,int a,int b):x(a,b){
        k=c;
    };
    int getk();
    void setk();
};

class z:public y{
    public:
    
    void f();
};