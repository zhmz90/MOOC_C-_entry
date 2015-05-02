#include<iostream>
#include<cmath>

using namespace std;

long long iter(long long n){
    long long  c,a=1,b=1;
    if (n<=1){
        return 1;
    }
    for (int i=1;i<n;i++){
        c = a+b;
        a= b;
        b=c;
    
    }

    return b;

}



int main(){
    
    long long n;
    cin>>n;
    cout<<iter(n)<<endl;

    return 0;
}
