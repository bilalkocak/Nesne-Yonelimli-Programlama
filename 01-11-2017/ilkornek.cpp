#include<iostream>
using namespace std;

class thisp{
    int i;
public:
    void setle(int a){
        this->i = a;
    };
    int cikar(){
        return(*this).i;
    }
};

int main(int argc,char* argv[]){
    thisp p;
    p.setle(10);
    cout<<"Sayi = "<<p.cikar();

    getchar();
    getchar();
}