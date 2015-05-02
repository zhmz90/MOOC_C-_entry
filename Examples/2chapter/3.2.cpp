#include<iostream>

using namespace std;

int main(){
    
    int x,y;

    cout<<"Enter x and y"<<endl;

    cin>>x>>y;

    if (x != y)
        if (x > y)
            cout<<"x>y"<<endl;
        else
            cout<<"x<<y"<<endl;
    else
        cout<<"x==y"<<endl;

//    decltype(test)x+y;

    auto test = 3;

    cout<<test<<endl;

    return 0;
}
