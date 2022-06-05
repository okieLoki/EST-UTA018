//overloading of logical not(!) operator

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
            cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
        }
        void operator !(){
            a = !a;
            b = !b;
            c = !c;
        }
};

int main(){

    test t;
    t.getdata(1,0,1);
    t.display();

    //t.operator!();
    !t;
    t.display();
}