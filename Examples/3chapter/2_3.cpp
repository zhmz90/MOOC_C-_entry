#include<iostream>

using namespace std;

double power(double x,int n);

int main(){
    
    int value = 0;
    cout<<"Enter an 8 bit binary number"<<endl;
    cout<<"sizeof(\"1\")"<<sizeof("1")<<endl;
    for (int i=7; i>=0; i--){
    
        char ch;
        cin>>ch;
        if (ch == '1'){
        
            value += static_cast<int>(power(2,i));
        }
    
    }

    cout<<"Decimial value is:"<<value<<endl;
    return 0;
}


double power(double x,int n){
    
    if (n<0){
    
        cout<<"n should not less than 0"<<endl;
    }
    else {
        if (n == 0){
        
            return 1;
        }
    }

    double ret=1.0;
    while (n--){
        ret *= x;
    
    }

    return ret;

}
