#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream out;
    out.open("file3.txt");
    out<<"hi\n";
    out<<"hoe are you\n";
    out<<"bla bla bla\n";
    out.close();


    ifstream in;
    string st,st2;
    in.open("file3.txt");
    // in>>st>>st2;
    // cout<<st>>st2;

    while(in.eof() ==0 ){
         getline(in,st);
         cout<<st<<endl;
    }

    in.close();

}