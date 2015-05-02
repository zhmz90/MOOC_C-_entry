#include<iostream>

using namespace std;

bool recteng(unsigned long long a,unsigned long long b, unsigned long long c){

    unsigned long long x,y,z;

    //a > b ? (a > c ? z = a,x=b,y=c:z=c,x=a,y=b):(b > c? z=b,x=a,y=c:z=c,x=a,y=b);
    
    if (a*a + b*b == c*c || a*a+c*c == b*b || b*b + c*c == a*a ){
        return true;
    }
    else{
        return false;
    }


}


int main(){

    unsigned long long x,y,z;
    cin>>x>>y>>z; 
    recteng(x,y,z) ? cout<<"True":cout<<"False";
    cout<<endl;
    

    return 0;
}
