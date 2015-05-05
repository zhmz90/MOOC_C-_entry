#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    float a = 3.0;
    cout<<3.0<<typeid(3.0).name()<<endl;

    return 0;
}
