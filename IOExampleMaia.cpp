#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>

using namespace std;

int main(){
    string line;
    ifstream fileToRead("PileOWords.txt");

    getline(fileToRead,line);
    stringstream ss;
    ss << line;
    for(int i = 0; i < 12; i++){

        getline(ss,line,',');
        cout << line << endl;
    }





}
