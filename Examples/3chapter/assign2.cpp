#include<iostream>

using namespace std;

long long fib(long long n){
    if (n == 1){
    
        return 1;
    }
    else{
        if (n == 0){
        return 1;
        
        }
    }

    return (fib(n-1)+fib(n-2));



}


int main(){
    long long a;
    cin>>a;
    cout<<fib(a)<<endl;


    return 0;
}
