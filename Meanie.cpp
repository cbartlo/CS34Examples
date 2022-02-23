#include<iostream>
#include<vector>

using namespace std;


int main(){

    vector<float> numList;
    float total = 0;
    float userNum = 0;

    while(userNum >= 0){

        cout << "Enter a number to add, -1 to quit";
        cin >> userNum;

        if(userNum >= 0 ){
            total+=userNum;
            numList.push_back(userNum);

        }

    }

    float mean = total/numList.size();

    cout << "The mean of your list is: " << mean << endl;

    for(int i = 0; i < numList.size(); i++){

        if(numList[i] < mean){

            cout << numList[i] << endl;
        }

    }




}
