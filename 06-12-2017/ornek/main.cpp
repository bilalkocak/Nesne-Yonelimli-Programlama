#include <iostream>
using namespace std;

int STRLEN(char* kelime){
    int sonuc = 0;
    char *gezici;
    gezici = kelime;

    while('\0' != *gezici){
        gezici++;
        sonuc++;
    }


    return sonuc;
}



int main(){
    char *s;
    char kesme;
    do{
        cout<<"String";
        cin>>s;
        cout<<"String uzunlugu: "<<STRLEN(s);
    }while(kesme!='c');

}