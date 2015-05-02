#include<iostream>

using namespace std;

bool ugle(long int n){
    if (n==1){
    
        return false;
    }
    if (n == 2 || n == 3|| n== 5){
    
        return true;
    }

    if (n % 2 == 0){
    
        return ugle(n/2);
    }
    else if (n % 3 == 0){
    
        return ugle(n/3);
    }
    else if (n % 5 == 0){
    
        return ugle(n/5);
    }
    else{
    
        return false;
    }

}

int main(){

    long int n;
    cin>>n;
    ugle(n)?cout<<"True":cout<<"False";
    cout<<endl;

    return 0;
}
