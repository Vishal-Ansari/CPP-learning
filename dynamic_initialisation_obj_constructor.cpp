#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float rate;
    float returnValue;  

    public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);

    void show();
};

BankDeposit::BankDeposit(int p, int y, float r){
    principal=p;
    years=y;
    rate=r;
    
    returnValue=principal;

    for(int i=0;i<y;i++){
        returnValue=returnValue * (1+rate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r){
    principal=p;
    years=y;
    rate=float(r)/100;
    
    returnValue=principal;

    for(int i=0;i<y;i++){
        returnValue=returnValue * (1+rate);
    }
}


void BankDeposit:: show(){
        cout<<"principal amount was "<<principal<<endl <<" return value after "<<years<<" is  "<<returnValue<<endl;
}

int main(){

    BankDeposit b1;
    int p, y ;
    float r;
    int R;

    cout<<"enter the principle amount , years and rate";
    cin>>p>>y>>r;
    b1 = BankDeposit(p,y,r);
    b1.show();
        
   return 0;
}