//string concatenation using friend function

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
        friend test operator +(test t1, test t2);
};

test operator +(test t1, test t2){
    test res;
    strcat(t1.a, t2.a);
    strcpy(res.a, t1.a);
    return res;
}

int main(){
    test t1, t2;
    t1.getdata();
    t2.getdata();
    test t3 = t1 + t2;
    t3.display();
}