#include<iostream>
#include<random>
#include<time.h>
#include<math.h>

using namespace std;

int rollDemBones(int,int);

default_random_engine generator(time(NULL));

int main(){
    float dartX,dartY,totalDarts = 0;
    // This sets up the default random number engine w/ seed

	//Use this to pick the range and type of random number
	uniform_real_distribution<float> floatDist(0,10);
	//This one is for integer distributions
	uniform_int_distribution<int> intDist(0,100);
	// note you can put in <long int> if you need bigger numbers


rollDemBones(6,14);





}


int rollDemBones(int sidesOnDice, int numDice){
    uniform_int_distribution<int> intDist(1, sidesOnDice);

    for(int i = 0; i < numDice; i++){

        int roll = intDist(generator);
        cout << roll << " ";
    }



}
