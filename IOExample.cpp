#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>


using namespace std;

int main(){

    vector<string> thingsFromFile;
    string fileName = "example.txt";
    string line;
    // open the file
    ifstream fileToRead(fileName);


    //check to see if the file is actually opened!
    if(fileToRead.is_open()){

        //while(!fileToRead.eof()){
            for(int i = 0; i < 6; i++){
                getline(fileToRead,line,',');
                //cout << line << endl;
                thingsFromFile.push_back(line);
            }
        //}

    }
    else{
        cout<<"Could not find file!";
    }
    sort(thingsFromFile.begin(), thingsFromFile.end());
    for(int j = 0; j < thingsFromFile.size(); j++){
        cout << thingsFromFile[j]  << endl;
    }
}
