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