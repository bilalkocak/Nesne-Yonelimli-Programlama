#include <iostream>
#include <cstring>

using namespace std;

class String{
    int boy;
    char *icerik;

public:
    String(char *);
    void goster();
    ~String();
};

String::~String() {
    cout<<"Yok edici calisti"<<endl;
    delete[]icerik;
}

void String::goster() {
    cout<<icerik<<","<<endl;
}

String::String(char *gelen_veri) {
    cout<<"Kurucu calisti"<<endl;
    boy=strlen(gelen_veri);
    icerik=new char[boy+1];
    strcpy(icerik,gelen_veri);
}




int main() {

    String string1("String 1");
    String string2("String 2");

    string1.goster();
    string2.goster();

    string1.~String();
    string2.~String();

    return 0;
}
