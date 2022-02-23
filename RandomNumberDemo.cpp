#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<float> numList;
    float userNum = 0, mean = 0, total = 0;

    while(true){
        cout << "Please enter the next number, -1 to quit!";
        cin >> userNum;
        if(userNum == -1){
            break;
        }
        total += userNum;
        numList.push_back(userNum);

    }

    mean = total/numList.size();
    cout << "The mean is: " << mean << endl;



    for(int j = 0; j < numList.size(); j++){
        if(numList[j] < mean){
            cout << numList[j] << " ";
        }
    }


}




