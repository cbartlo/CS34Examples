#include<iostream>
#include<vector>

using namespace std;

void showVector(vector<int> &);
int sumVector(vector<int> &);
void multVector(vector<int> &);
bool isEven(int);

int main(){

    vector<int> someNumbers = {1,3,4,5,6,76,2,1,-5};

    showVector(someNumbers);
    multVector(someNumbers);
    showVector(someNumbers);
    int ans = sumVector(someNumbers);
    if(isEven(ans))
    {
        cout << ans << " is even!" << endl;
    }
    else{

    cout << ans << " is odd! " << endl;
    };



}



void showVector(vector<int> &theList){
    // This bit of code is helpful for going through a vector
    // when you don't care about the index
    for(auto num: theList){
        cout << num << " ";

    }
    cout <<endl;
}

int sumVector(vector<int> &theList){
    int total = 0;

    for(auto num: theList){
        total+=num;
    }
    return total;
}

void multVector(vector<int> &theList){

    for(int i = 0; i < theList.size(); i++){
        theList[i] *= 7;
    }

}

bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}
