//User defined to User defined datatype conversion

#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
        test(){

        }
        test(int x, int y){
            a = x;
            b = y;
        }
        void display(){
            cout<<a<<" "<<b<<endl;
        };
};

class sample{
    int m, n;
    public:
        sample(){

        }
        sample(int x, int y){
            m = x;
            n = y;
        }
        void display(){
            cout<<m<<" "<<n<<endl;
        };
        operator test(){
            return test(m,n);
        }
};

int main(){
    test t;
    sample s(10,20);
    t = s;
    t.display();
}