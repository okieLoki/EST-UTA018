//String concatenation using operator overloading (using char array)

#include<iostream>
#include<string.h>
using namespace std;

class test{
    char a[20];
    public:
        void getdata(){
            cout<<"Enter the string: ";
            cin.getline(a, 20);
        }
        void display(){
            cout<<a<<endl;
        }
        test operator +(test t){
            test res;
            strcat(a, t.a);
            strcpy(res.a, a);
            return res;
        }
};

int main(){
    test t1, t2;
    t1.getdata();
    t2.getdata();
    test t3 = t1 + t2;
    t3.display();
}