//User-defined to basic datatype conversion

#include<iostream>
using namespace std;

class test{
    int a;
    public:
        void getdata(int a){
            this->a = a;
        }
        operator int(){
            return a;
        }
};

int main(){
    test t1;
    t1.getdata(10);
    int x = t1;
    cout<<x<<endl;
}