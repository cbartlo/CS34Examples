#include<iostream>
#include<random>
#include<time.h>
#include<vector>
using namespace std;

mt19937 generator(time(NULL));

int main(){

    uniform_int_distribution<int> intDist(0,99);
    vector<int> numList;

    for(int i = 0; i < 20; i++){
        numList.push_back(intDist(generator));
    }
    for(int i = 0; i < 20; i++){
        cout << numList[i] << " ";
    }
    cout << endl;
// Insertion Sort starts here

    for(int k = 1; k < numList.size(); k++){

        for( int j = k; j > 0 and numList[j] < numList[j-1]; j--){
            int temp = numList[j];
            numList[j] = numList[j-1];
            numList[j-1] = temp;
        }


    }


// Print sorted list out
    for(int i = 0; i < 20; i++){
        cout << numList[i] << " ";
    }
    cout << endl;
}
