 #include<iostream>
 using namespace std;

 class Shop{
     int id;
     float price;
     public:
     void setData(int a, float b){
         id=a;
         price=b;
     }

     void getData(){
         cout<<"code of this item is  "<<id<<endl;
         cout<<"prtice of this item is "<<price<<endl;
     }

 };
 
 int main(){
     int size=5;
     Shop *ptr= new Shop[size];
     int p,i;
     float q;
     Shop *ptrtemp=ptr;

    for(int i=0;i<size;i++)
    {
        cout<<"enter the id and price of the item: "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(int i=0;i<size;i++)
    {
        cout<<"enter the id and price of the item: "<<i+1<<endl;
        ptrtemp->getData();
        ptrtemp++;
        
    }
    return 0;
 }