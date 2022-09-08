#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int , int ); // constructor declaration
    void printData(){
        cout<<"the number is: "<< a <<" + "<<b<<"i"<<endl;
    }
};

complex:: complex(int x, int y){
    a=x;
    b=y;
}

int main(){
    //implicit call
    complex c(5,7);
    c.printData();

    // explicit call
    complex b= complex(1,3);
    b.printData();
   return 0;
}