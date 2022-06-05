//function overriding

#include<iostream>
using namespace std;

class base{
    protected:
        int i;
    public:
        virtual void convert(float x){
            cout<<"This is base class convert function"<<endl;
        }
};

class kilo_to_meter:public base{
    public:
        void convert(float x){
            i = x;
            cout<<i*1000<<" meters"<<endl;
        }
};

class inr_to_usd:public base{
    public:
        void convert(float x){
            i = x;
            cout<<i*0.014<<" dollars"<<endl;
        }
};

class cel_to_fah:public base{
    public:
        void convert(float x){
            i = x;
            cout<<i*1.8+32<<" fahrenheit"<<endl;
        }
};

int main(){
    base *b;
    kilo_to_meter k;
    inr_to_usd i;
    cel_to_fah c;

    b = &k;
    b->convert(10.5);

    b = &i;
    b->convert(10.5);

    b = &c;
    b->convert(10.5);

    return 0;
}