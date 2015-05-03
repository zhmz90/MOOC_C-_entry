#include<iostream>

using namespace std;

class Integer {

    private:
        int _num;
    public:
        Integer(int num){
            _num = num;
        }
        int gcd(Integer b){
            
            int n=_num,m=b.getVal();
            int remain,tmp;
            while (true){
                if (n<m){
                    tmp = n;
                    n=m;
                    m=tmp;
                }
                remain = n % m;
                if (remain==0||m==1){
                    return m;
                }
                n = m; 
                m = remain;
            }
            
        }
        int getVal(){
        
            return _num;
        }



};



int main(){
    
    int a,b;
    cin>>a>>b;
    Integer A(a);
    Integer B(b);
    //cout<<A.desc(a,b)<<endl;
    cout<<A.gcd(B)<<endl;

    return 0;
}
