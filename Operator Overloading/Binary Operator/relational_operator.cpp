//operator overloading for relational operator

#include<iostream>
using namespace std;

class test{
    int a;
    public:
        void getdata(int a){
            this->a = a;
        };
        void display(){
            cout<<a<<endl;
        };
        bool operator >(test t){
            if(a > t.a)
                return true;
            else
                return false;
        }
        bool operator ==(test t){
            if(a == t.a)
                return true;
            else
                return false;
        }
};

int main(){
    test t1,t2;
    t1.getdata(2);
    t2.getdata(3);

    if(t1 > t2)
        cout<<"t1 is greater than t2"<<endl;
    else
        cout<<"t1 is less than t2"<<endl;
    if(t1==t2)
        cout<<"t1 is equal to t2"<<endl;
    else
        cout<<"t1 is not equal to t2"<<endl;
}