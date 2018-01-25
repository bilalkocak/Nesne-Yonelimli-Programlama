#include <iostream>
#include <fstream>
using namespace std;
int main() {

    float x,y;
    float sonuc=0;
    float ortalama;
    ofstream outfile;
    outfile.open("file.txt");

    cout<<"Not girme"<<endl;

    for (int i = 0; i < 10; ++i) {

        cout<<"No"<<i+1<<": ";
        cin>>y;

        cout<<"Not"<<i+1<<": ";
        cin>>x;

        outfile<<x<<" "<<y<<endl;

    }
    ifstream infile;
    infile.open("file.txt");
    cout<<"Ortalama :"<<endl;

    for (int j = 0; j < 10; ++j) {

        infile>>x>>y;
        sonuc=sonuc+x;
    }
    ortalama=sonuc/10;
    cout<<ortalama;






    infile.close();
    outfile.close();
    return 0;
}