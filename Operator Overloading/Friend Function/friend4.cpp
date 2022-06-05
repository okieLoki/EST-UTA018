//arithmetic operator overloading using friend function

#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
        void getdata(int real, int img){
            this->real = real;
            this->img = img;
        };
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        };
        friend complex operator +(complex c1, complex c2);
};

complex operator +(complex c1, complex c2){
    complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}

int main(){
    complex c1, c2, c3;
    c1.getdata(2,3);
    c2.getdata(3,4);
    c3=c1+c2;
    c3.display();
}