//post increment and pre increment using operator overloading

#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
        void getdata(int a, int b){
            this->a = a;
            this->b = b;
        };
        void display(){
            cout<<a<<" "<<b<<endl;
        };
        friend test operator ++(test &t, int);
        friend test operator ++(test &t);
};

test operator ++(test &t, int){
    test temp;
    temp.a = t.a + 1;
    temp.b = t.b + 1;
    return temp;
}

test operator ++(test &t){
    t.a = t.a + 1;
    t.b = t.b + 1;
    return t;
}

int main(){
    test t1, t2;
    t1.getdata(10,20);

    t2 = ++t1;
    t1.display();
    t2.display();

    test t3,t4;
    t3.getdata(30,40);
    t4=t3++;
    t3.display();
    t4.display();
}