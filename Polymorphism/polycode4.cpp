//function overriding

#include<iostream>
using namespace std;

class base{
    protected:
        int var;
    public:
        virtual void show(int x){
            cout<<"In Base class"<<endl;
        }
};

class derived: public base{
    public:
        void show(int x){
            cout<<"Value of x is: "<<x<<endl;
        }
};

int main(){
    base *b1;
    derived d;
    b1=&d;
    b1->show(10);

    base *b2 = new derived;
    b2->show(20);
    delete b2;
}