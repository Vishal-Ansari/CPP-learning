#include<iostream>
using namespace std;

class Complex{
 int real, imaginary;
 public:
     void getData(){
         cout<<"the real part is "<<real<<endl;
         cout<<"the imaginary  part is "<< imaginary <<endl;
     }

     void setData(int a, int b){
         real=a;
         imaginary=b;
     }
};

int main(){
    // Complex c1;
    // Complex *ptr=&c1; 
    // or we can create pointer as like
    Complex *ptr= new Complex;
    (*ptr).setData(1,4);
    //or
    ptr->getData();
    // (*ptr).getData();

    // array pf objects ...

    // Complex *ptr= new Complex[3];
   return 0;
}