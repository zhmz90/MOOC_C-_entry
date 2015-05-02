#include<iostream>

using namespace std;

enum GameResult {WIN, LOSS, TIE, CANCEL};

int main(){
    GameResult result;
    enum GameResult omit = CANCEL;
    for (int count=WIN; count <= CANCEL; count++){
        result = GameResult(count);
        if (result == omit){
            cout<<"The game was cancelled"<<endl;
        
        }
        else {
            cout<<"The game was played ";
            if (result == WIN){
            
                cout<<"and we win.";
            }
            if (result == LOSS){
                
                cout<<"and we lose";
            }
            cout<<endl;
        
        }
    
    
    
    }

    auto t_auto = 1+2;
    decltype(t_auto) test_auto = 3;

    cout<<t_auto<<endl;

    cout<<test_auto<<endl;
    return 0;
}
