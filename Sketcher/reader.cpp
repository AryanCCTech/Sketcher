#include <fstream>
#include <iostream>
#include <string>
#include "reader.h"

using namespace std;
void Reader::reader(){
    ifstream myfile ("test.txt");
    string line;
    if (myfile.is_open()){
        while (getline(myfile,line))
            cout << line <<"\n";
        myfile.close();
    }
}