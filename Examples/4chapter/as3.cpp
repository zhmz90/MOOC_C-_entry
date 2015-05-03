#include<iostream>
#include<cmath>

using namespace std;

class Equation{
    private:
        int _a,_b,_c;
    public:
        Equation(int a, int b, int c):_a(a),_b(b),_c(c){
      
        
        }
        void solve(){
            
            int i;
            float r1,r2;

            

            cout<<i<<endl;

            switch (i){
                case 1:
                    r1 > r2:cout<<r1<<" "<<r2<<endl:cout<<r2<<" "<<r1<<endl;
                    break;
                case 2:
                    cout<<r1<<endl;
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    cout<<r1<<endl;
                    break;
            
            
            }
        
        
        }

};


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    Equation tmp(a,b,c);
    tmp.solve();

    return 0;
}
