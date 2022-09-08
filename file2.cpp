#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //connecting our file with hout stream

ofstream hout("file3.txt");// ofstream is objecct and hout ki jgh kuch bhi use krskte h
string st;
cout<<"enter your name:-  ";
getline(cin,st); 
hout<<"my name is "+st;
hout.close();

ifstream hin("file3.txt");
string content;
// hin>>content;
getline(hin,content);

cout<<"content is "<<content;
   return 0;
}