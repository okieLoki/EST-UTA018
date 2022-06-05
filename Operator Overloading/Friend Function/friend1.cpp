// recap of friend function

#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
        void getdata(int a, int b){
            this->a = a;
            this->b = b;
        };
        friend void show(test t);
};

void show(test t){
    cout<<t.a<<" "<<t.b<<endl;
}

int main(){
    test t1,t2;
    t1.getdata(2,3);
    show(t1);
}