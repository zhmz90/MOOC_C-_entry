#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int raw;

    cin>>raw;
    
    bool boss = true;
    int ret = 0;
    int pos = 0;
    int pos_val;
    for (int i=0; boss == true; i++){
        if (raw <= 1){
            ret += raw*pow(2,pos);
            cout<<ret<<endl;
            return 0;
        
        }
        else{
            pos_val = raw % 10;
            raw = raw / 10;
            ret += pos_val * pow(2,pos++);
        
        }
    
    
    }



    return 0;
}
