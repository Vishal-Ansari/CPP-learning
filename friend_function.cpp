#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
    int sumComComplex(complex, complex);
};  

class complex
{
    int a, b;

    // declaring individual function as friends
    friend int calculator::sumRealComplex(complex, complex);
    friend int calculator::sumComComplex(complex, complex);

    //Aliter  ::  Declaring the entire class as friend
    // friend class calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printData()
    {
        cout << "your complex no is " << a << "+" << b << "i" << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumComComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    complex o1 , o2 ;

    o1.setData(2, 3);
    o2.setData(5, 8);
    

    calculator calc;
    int res=calc.sumRealComplex( o1, o2 );
    cout<<"the sum of real part of o1 and o2 is "<< res<<endl;
    
    int resc=calc.sumComComplex( o1, o2 );
    cout<<"the sum of complex part of o1 and o2 is "<< resc<<endl;

    return 0;
}