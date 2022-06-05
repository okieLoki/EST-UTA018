# Polymorphism meaning:
Poly means many and morph means forms. The word polymorphism means having many forms. In this case, the word polymorphism means having many forms of the same type.

# Classification of Polymorphism:
    1. Compile Time Polymorphism:

        Compile time polymorphism is when the compiler checks the type of the object at compile time.

        Types of Compile time polymorphism:
            1. Function Overriding
            2. Overator Overloading
    
    2. Runtime Polymorphism:

        Deals with the runtime behavior of the object. One of its example is virtual function.

# Overloading vs Overriding:
    1. Overloading:
        Overloading is when you have multiple functions with the same name but different parameters.
    2. Overriding:
        Overriding is when you have the same function name but different behavior. Its defined in different classes.
    
# Compile time and Runtime Polymorphism:
    - Compile time or Static polymorphism is executed using function overloading.
    - Run time polymorphism or dynamic/late binding is done using function overriding and virtual functions.

# Difference between virtual functions and pure virtual functions:

    1. Virtual functions:
        -has some defination in class.
        -syntax:
            virtual void function_name(parameters);
        -derived class can be overriden if required.

    2. Pure Virtual functions:
        -has no defination in class.
        -syntax:
            virtual void function_name(parameters) = 0;
        -derived class has to be overriden.

    > It is compulsory to override a pure virtual function in derived class.

## Function overloading code:

```cpp
#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
    return a+b;
}

int sum(int a[], int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){

    cout<<"Case 1: "<<sum(10,20)<<endl;
    cout<<"Case 2: "<<sum(10.225f,20.5f)<<endl;
    int a[]={10,20,30,40};
    cout<<"Case 3: "<<sum(a,4)<<endl;
    cout<<"Case 4: "<<sum(10,20,30)<<endl;
    return 0;
}
```
## Function overriding code (using virtual function):

```cpp
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
```

## Function overrding (using pure virtual functions):

```cpp
//pure virtual function

#include<iostream>
using namespace std;

class base{
    protected:
        int x;
    public:
        virtual void tempConvert(int i)=0;
};

class cel_to_fah:public base{
    public:
        void tempConvert(int i){
            x = i;
            cout<<x*1.8+32<<" fahrenheit"<<endl;
        }
};

class far_to_cel:public base{
    public:
        void tempConvert(int i){
            x = i;
            cout<<(x-32)*5/9<<" celsius"<<endl;
        }
};

int main(){
    int n;
    cout<<"1. Celcius to Fahrenheit\n2. Fahrenheit to Celcius"<<endl;
    cin>>n;
    base *b1;
    cel_to_fah c;
    b1=&c;

    base *b2 = new far_to_cel;
    switch (n)
    {
    case 1:
        b1->tempConvert(10);
        break;
    
    case 2:
        b2->tempConvert(10);
        break;
    }

    delete b1, b2;
}
```
