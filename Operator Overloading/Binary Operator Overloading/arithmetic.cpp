// adding two complex numbers using operator overloading

#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
        void getdata(int real, int img){
            this->real = real;
            this->img = img;
        }
        void display(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        complex operator +(complex c){
            complex res;
            res.real = real + c.real;
            res.img = img + c.img;
            return res;
        }
};

int main(){
    complex c1, c2;
    c1.getdata(2, 3);
    c2.getdata(3, 4);

    complex c3 = c1 + c2;
    c3.display();
}