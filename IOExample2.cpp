#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main(){

    //This is creates a file we can read or write from
    fstream myFile;
    //This makes a brand new version of the file, ready to send things to.
    myFile.open("SuperCool.txt", ios::out);

    if(myFile.is_open()){
        //We send things just like cout!
        myFile << "Howdy folks!" << endl;
        myFile << "I like fruit!" << endl;

    }
    myFile.close(); //close the file when you are done writing to it!

    myFile.open("SuperCool.txt", ios::app);

    if(myFile.is_open()){
        //We send things just like cout!
        myFile << "More Stuff!" << endl;
        myFile << "I like ice cream!" << endl;

    }
    myFile.close(); //close the file when you are done writing to it!






}
