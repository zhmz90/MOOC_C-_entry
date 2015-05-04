#include<iostream>

using namespace std;

class Yuebao{

    static double profitRate;
    public:
        static void setProfitRate(double rate);

};

int main(){
    int n;
    while (cin>>n){

        double profitRate;
        cin>>profitRate;
        Yuebao::setProfitRate(profitRate);
        Yuebao y(0);
        int operation;
        double amount;
        for (int i=0;i<n;i++){
            y.addProfit();
            cin>>operation>>amount;
            if (operation==0){
                y.deposit(amount);
            }
            else{
                y.withdraw(amount);
            }
        
        }
        cout<<y.getBalance()<<endl;
    
    }

    return 0;
}
