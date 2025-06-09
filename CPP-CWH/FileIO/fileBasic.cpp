#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // string st = "Harray bhai";
    // string st2 ="";
    //opennign file using constructior and writing it
    // ofstream out("sample.txt"); //write operation
    // out << st; 

    // //opennign file using constructior and reading it
    // ifstream in("sample.txt"); //write operation
    // // in >> st2; //provide only first word
    // getline(in,st2);
    // cout<<st2;
    // in.close();

    // ofstream outFile;
    // outFile.open("sample.txt");
    // outFile <<"this is me";
    // outFile.close();

    ifstream inFile;
    inFile.open("sample.txt");
    string st="";
    while(inFile.eof() == 0){
        getline(inFile,st);
        cout<<st<<endl;
    }
    inFile.close();



return 0;
}