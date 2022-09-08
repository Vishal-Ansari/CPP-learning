#include<iostream>
using namespace std;

class Test{
    int a,b;
    public:
        // Test(int i, int j): a(i) ,b(j)
        // Test(int i, int j): a(i) ,b(i+j)
        // Test(int i, int j): a(i) ,b(2*j)
        // Test(int i, int j): a(i) ,b(a + j)
        // Test(int i, int j): b(j) , a(i+b);  // it will give a garbage value of a due to order of a and b a is declared first
        {
            cout<<"the valuse of a is  "<<a<<endl;
            cout<<"the valuse of b is  "<<b<<endl;
        }
};

int main(){
    Test t(3,5);
   return 0;
}