#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "writer.h"
using namespace std;

void Writer::writer(vector<string> data_){
    string file;
    cout << "\nName the file you would like to create: ";
    cin >> file;
    string filename_ = file+".dat";
    ofstream outfile (filename_);
    for (string x : data_) {
        outfile << x << "\n";
    }
    outfile.close();
}