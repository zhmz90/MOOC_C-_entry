#include<iostream>

using namespace std;

int main(){

    int n;

    cin>>n;

    if (n==0){
        return 0;
    }

    int num_space,num_star;

    for (int i=1; i<2*n; i++){
        
        num_space = i<= n ? n - i : i-n;
        num_star = i<=n ? 2 * i -1 : 2*(n-(i-n))-1;
        

        while (num_space-- != 0){
        
            cout<<" ";
            
        }

        while (num_star-- != 0){
            cout<<"*";
        
        }

        cout<<endl;
    
    }


    return 0;
}
