#include<iostream>
#include<cstring>

using namespace std;

class Mystring{

    public:
        Mystring(const char *s);
        ~Mystring(){delete []data;};
    protected:
        unsigned int len;
        char *data;
};
Mystring::Mystring(const char *s){
    len=strlen(s);
    data=new char[len+1];
    strcpy(data,s);
}

int main(){
Mystring a("C++ plus programming");
Mystring b(a);
return 0;

}
