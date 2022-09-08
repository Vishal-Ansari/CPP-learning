#include<iostream>
using namespace std;
class C2;
class C1{
    int val;
    friend void exchange(C1 &, C2 &);
    public:
        void setdata(int value){
            val=value;
        }

        void display(void){
            cout<<val<<endl;
        }
};

class C2{
    int val2; 
    friend void exchange(C1 &, C2 &);
    public:
        void setdata(int value){
            val2=value;
        }

        void display(void){
            cout<<val2<<endl;
        }
};

void exchange(C1 &x, C2 &y)
{
    int temp=x.val;
    x.val=y.val2;
    y.val2=temp;
}

int main(){
    C1 a;
    C2 b;

    a.setdata(12);
    b.setdata(32);
    exchange(a,b);
    cout<<"the value of c1 after swap is: ";
    a.display();
    cout<<"the value after c2 swap is: ";
    b.display();
   return 0;
}