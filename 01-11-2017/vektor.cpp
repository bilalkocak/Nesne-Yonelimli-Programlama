#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>intList;
    unsigned int i;
    intList.push_back(12);
    intList.push_back(75);
    intList.push_back(95);
    

    for(i=0;i<intList.size();i++){
        cout<<intList[i]<<" "<<endl;
    }
    
    
}
