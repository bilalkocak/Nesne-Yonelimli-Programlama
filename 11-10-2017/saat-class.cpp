#include <iostream>
using namespace std;
class clockType{
public:
    int hr;
    int min;
    int sec;

    void setTime(int ,int ,int );

    void saat(){
        hr++;
        if(hr>12)
            hr=1;
    };
    void dakika(){
        min++;
        if(min>59){
            min=0;
            saat();
        }
    };
    void saniye(){
        sec++;

        if(sec>59){
            sec=0;
            dakika();
        }
    };
    void saatKac(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    };
};

void clockType::setTime(int a, int b, int c){
    hr=a;
    min=b;
    sec=c;
};


int main(){
    clockType d;
    d.setTime(0,0,0);
    d.saatKac();
    for (int i = 0; i < 46800; ++i) { //saniye miktarına göre saati veriyor.
        d.saniye();
    }
    d.saatKac();

    return 0;
}
