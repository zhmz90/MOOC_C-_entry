#include<iostream>

using namespace std;

int pow(int base,int power){
    
    int ret=1;
    while (power-- >0){
    
        ret *= base;
    
    
    }

    return ret;

}

int main(){
    
    cout<<"5 to the power 2 is: "
        <<pow(5,2)<<endl;


    return 0;
}
