//overloading of unary minus(-) operator

#include<iostream>
using namespace std;

class test{
    int a,b,c;

    public:
        void getdata(int a,int b,int c){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        void display(){
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
            cout<<"c="<<c<<endl;
        }
        void operator -(){
            a=-a;
            b=-b;
            c=-c;
        }
};

int main(){
    test t;
    t.getdata(1,2,3);
    t.display();

    //t.operator-();
    -t;
    t.display();
}