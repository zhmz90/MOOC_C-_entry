#include<iostream>

using namespace std;

int main(){
    
    int day;

    cin>>day;

    switch(day){
    
    case 0:cout<<"Sunday"<<endl;
    case 1:cout<<"Monday"<<endl;break;
    case 2:cout<<"Tuseday"<<endl;break;
    case 3:cout<<"Wednesday"<<endl;break;
    case 4:cout<<"Tursday"<<endl;break;
    case 5:cout<<"Friday"<<endl;break;
    case 6:cout<<"Saturday"<<endl;break;
    
    default:
           cout<<"Out of range "<<endl;break;
    
    }



    return 0;
}
