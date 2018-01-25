#include <iostream>

using namespace std;
void kareciz(int a ){
    if(a!=0){
        for (int i = 0; i < a; ++i) {//satir
            for (int j = 0; j < a; ++j) {//sutun
                if(i==0 || i==a-1){
                    cout<<"*";
                } else if(j==0||j==a-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    kareciz(a/2);
}
int main(){
    int a=12;
    kareciz(a);
}