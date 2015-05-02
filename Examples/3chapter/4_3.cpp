#include<iostream>

using namespace std;

unsigned int reverse( unsigned int n){
    
    unsigned int ret = n % 10;
    
    unsigned int pos_val;
    
    while ( (n /= 10) >0){
        ret *= 10;
        pos_val = n % 10;
        ret += pos_val;

    }

    return ret;
}


int main(){
       
    unsigned  int n = 11;

    for (unsigned int i=11; i<=999;i++ ){
            
       (reverse(i) == i && reverse(i*i)==i*i && reverse(i*i*i)==i*i*i && (cout<<" "<<i));
    
    }
    cout<<endl;

    return 0;
}
