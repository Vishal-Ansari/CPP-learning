#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(int x, int y){
             a=x;
             b=y;
        }

        complex(int x){
            a=x;
            b=0;
        }

    void printData(){
        cout<<"the number is: "<< a <<" + "<<b<<"i"<<endl;
    }
};


int main(){
    //implicit call
    complex c(5,7);
    complex b(3);
    c.printData();
    b.printData();

   return 0;
}