#include<iostream>
#include<string>

using namespace std;

int scoreWord(string);
int coolerWordScorer(string);
int main(){

    string userWord = "";

    while(userWord != "0"){
        cout << "What word to score, enter 0 to quit!" << endl;
        cin >> userWord;

        if(userWord != "0"){
            cout << scoreWord(userWord) << endl;
            cout << coolerWordScorer(userWord) << endl;
        }
    }

}

int scoreWord(string wordToScore){
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int scrabblePoints[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int points = 0;

    for(int i = 0 ; i < wordToScore.length(); i++){

        for(int k = 0; k < letters.length(); k++){

            if(wordToScore[i] == letters[k]){
                points += scrabblePoints[k];
                break;
            }

        }

    }
    return points;
}

int coolerWordScorer(string wordToScore){

    int scrabblePoints[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int points = 0;
    for(int i = 0 ; i < wordToScore.length(); i++){
        points += scrabblePoints[wordToScore[i] - 'a'];
    }

    return points;


}
