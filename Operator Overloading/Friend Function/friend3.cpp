//logical not overloading using friend function

#include<iostream>
using namespace std;

class test{
    int a,b,c;
    public:
        void getdata(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        };
        void display(){
            cout<<a<<" "<<b<<" "<<c<<endl;
        };
        friend void operator !(test &t);
};

void operator !(test &t){ //address is passed as argument
    t.a = !t.a;
    t.b = !t.b;
    t.c = !t.c;
}

int main(){
    test t1;
    t1.getdata(0,0,1);
    t1.display();
    !t1;
    t1.display();
}