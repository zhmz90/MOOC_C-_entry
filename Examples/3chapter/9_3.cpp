#include<iostream>

using namespace std;

int select(int n, int k){
// calculate possible situations of chosing k from n
    if (n==k){
        return 1;
    }
    if (k == 0){
    
        return 1;
    }

    return select(n-1,k)+select(n-1,k-1);
}


int main(){

    
    int n = 3, k=2;
    cout<<"c_3 ^2: "<<select(3,2)<<endl;

    return 0;
}
