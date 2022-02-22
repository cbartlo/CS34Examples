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
}
