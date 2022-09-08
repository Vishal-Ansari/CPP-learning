#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st="hi how are you";
    string st2;
    //opening file using constructor and writing to it
    // ofstream out("file1.txt");
    // out<<st;

    //opening file using constructor and reading to it
    ifstream in("file2.txt");
    // in>>st2;  // it will give only one word 
    getline(in, st2);
    cout<<st2; 
}