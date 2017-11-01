#include <iostream>

using namespace std;
class p{
    int sayi;
public:
    void setle(int i);
    void goster();
};
void p::goster(){
    cout <<"sayi: "<< sayi<< endl;
}
void p::setle(int i){
    sayi=i;
}

int main(){
    //main 1
    /*p a,*b;
    a.setle(1);
    a.goster();
    b=&a;
    b->goster();
    (*b).goster();*/

    //main2
    p a[2],*b;
    a[0].setle(10);
    a[1].setle(20);

    b=&a[0];
    b->goster();
    b++;
    b->goster();

    b--;
    b->goster();


}