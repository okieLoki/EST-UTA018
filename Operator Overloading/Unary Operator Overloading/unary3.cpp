//overloading of pre-increment and post-increment operator

#include<iostream>
using namespace std;

class test{
    int a,b;

    public:
        void getdata(int a,int b){
            this->a=a;
            this->b=b;
        }
        void display(){
            cout<<"("<<a<<","<<b<<")"<<endl;
        }

        test operator ++(){ //pre-increment operator
            test h;
            h.a = ++a;
            h.b = ++b;
            return h;
        }

        test operator ++(int){ //post-increment operator
            test h;
            h.a = a++;
            h.b = b++;
            return h;
        }
};

int main(){

    test t1;
    t1.getdata(1,2);
    test t2 = ++t1;
    t1.display();
    t2.display();

    test j1;
    j1.getdata(5,6);
    test j2 = j1++;
    j1.display();
    j2.display();
}