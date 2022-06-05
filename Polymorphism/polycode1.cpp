//function overloading

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