#include<iostream>

using namespace std;


class Integer{
    private:
        int _num;
        int getLength(){
            return _num;
        }
    public:
        Integer(int num){
            _num = num;
        }
        int inversed(){
            int ret=0;
            int tmp;
            int n = getLength();
            while (n>0){
                ret = ret*10 + n%10;
                n = n / 10;
            }
            return ret;
        }


};

int main(){
    int n;
    cin>>n;
    Integer integer(n);
    cout<<integer.inversed()<<endl;

    return 0;
}
