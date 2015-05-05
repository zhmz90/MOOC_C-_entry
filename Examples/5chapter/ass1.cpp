#include<iostream>

using namespace std;

class Yuebao{
    private:
        static double profitRate;
        double money;
    public:
        Yuebao(double m):money(0){}
        //Yuebao(Yuebao &yb)
        ~Yuebao(){}
        static void setProfitRate(double rate){
            
            profitRate = rate;
        }
        double getBalance();
        void deposit(double amount);
        void withdraw(double amount);
        void addProfit();
};
double Yuebao::profitRate = 0;
//static void Yuebao::setProfitRate(double rate){

//    profitRate = rate;
//}

double Yuebao::getBalance(){

    return money;
}
void Yuebao::deposit(double amount){

    money += amount;
}
void Yuebao::withdraw(double amount){
    
    money -= amount;
}
void Yuebao::addProfit(){
       
    money = money*(1+profitRate);
}


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
