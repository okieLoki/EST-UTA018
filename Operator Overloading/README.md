## Defination:
    -These are functions to redefine built in operators with user defined datatypes.
    -For example, we can redefine the + operator with user defined datatypes.

## Ways to load an operator:
    Operator overaloading is achieves in two ways:

    1. Member function
    2. Non-member friend function

## Operators that cannot be overloaded:

    1. ? (Conditional operator)
    2. :: (Scope resolution operator)
    3. . (Member access operator)
    4. .* (Pointer to member access operator)
    5. sizeof (Size of operator)

## Types of operator overloading:

    1. Unary operator overloading:

    Operators that act upon a single operand to produce a new value. For example: unary minus(-), increment(++), decrement(--), logical not (!)
    
### Overloading of unary minus(-) operator
```cpp
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
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
            cout<<"c="<<c<<endl;
        }
        void operator -(){
            a=-a;
            b=-b;
            c=-c;
        }
};

int main(){
    test t;
    t.getdata(1,2,3);
    t.display();

    //t.operator-();
    -t;
    t.display();
}
```
### Overloading of logical not(!) operator
```cpp
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
```
### Overloading of pre-increment and post-increment operator
```cpp
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
```
> In case of post increment, we need to pass a dummy int as an argument, so that the compiler doesn’t confuse between pre-increment and post-increment operator overloading functions.

    2. Binary operator overloading:

    Operators that act upon two operands to produce a new value. 

        1. Arithmetic operators: +,-,*,/
        2. Relational operators: <,>,<=,>=,==,!=
        3. Logical operators: &&,||,!
        4. Bitwise operators: &,|,^,~

### Overloading of arithmetic operators
```cpp
// adding two complex numbers using operator overloading

#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
        void getdata(int real, int img){
            this->real = real;
            this->img = img;
        }
        void display(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        complex operator +(complex c){
            complex res;
            res.real = real + c.real;
            res.img = img + c.img;
            return res;
        }
};

int main(){
    complex c1, c2;
    c1.getdata(2, 3);
    c2.getdata(3, 4);

    complex c3 = c1 + c2;
    c3.display();
}
```

### Overloading of relational operators
```cpp
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
```

### String concatenation using operator overloading
```cpp
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
```