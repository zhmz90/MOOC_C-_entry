#include<iostream>

using namespace std;

int main(){
    int nums=0,sum=0,min,max;
    int var;

    cin>>nums;

    for (int i=0; i<nums; i++){
        cin>>var;
        if (i == 0){
            min = max = sum = var;
        
        }
        else{
            sum += var;
            if (var < min){
                min = var;
            }
            else  {
                if (var > max){
                    max = var;
                }
            
            
            }

        
        }
    
    
    
    }
    
    cout<<sum<<" "<<min<<" "<<max<<endl;

    return 0;
}
