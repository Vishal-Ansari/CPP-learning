#include<iostream>
using namespace std;

template <class T>// jha jha bhi T  hoga vo ek varible h jinhe hm specify krege  mtlb jha bhi custom data type use krna h vha T aega

class vector{
    public:
    T * arr;
    int size;
        vector(int m){
            size=m;
            arr=new T[size];
        }
        T dotProduct(vector &v){
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d+= this->arr[i] * v.arr[i];
            }
            return d;
        }

};

int main(){
//   vector <int> v1(3);  // ab is object k lie datat type int hoga
//   v1.arr[0]=4;   
//   v1.arr[1]=3;   
//   v1.arr[2]=1;

// vector <int> v2(3);
// v2.arr[0]=1;
// v2.arr[1]=0;
// v2.arr[2]=1;

// if no will be in float it wont work 
  vector <float> v1(3);// or is object k lie data type float hoga
  v1.arr[0]=1.4;   
  v1.arr[1]=3.3;   
  v1.arr[2]=0.1;

vector <float> v2(3);
v2.arr[0]=0.1;
v2.arr[1]=1.90;
v2.arr[2]=4.1;
// result will be wrong because values are in float and it is aceptiong integers nly as out data types are of integer type

// to reduce this complexity we use templates to use different data types for same variable
float a= v1.dotProduct(v2);
cout<<a<<endl;
   return 0;
}