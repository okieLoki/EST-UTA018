//basic to user defined datatype conversion

#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
        test(){

        }
        test(int x, int y){
            a = x;
            b = y;
        }
        void getdata(int a, int b){
            this->a = a;
            this->b = b;
        };
        void display(){
            cout<<a<<" "<<b<<endl;
        };
};

int main(){
    test t;
    int x = 10, y = 20;
    t = {x,y};
    t.display();
}