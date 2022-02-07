#include<iostream>
#include<random>
#include<time.h>
#include<math.h>

using namespace std;

int main(){
    float dartX,dartY,totalDarts = 0;
    // This sets up the default random number engine w/ seed
    default_random_engine generator(time(NULL));
	//Use this to pick the range and type of random number
	uniform_real_distribution<float> floatDist(0,10);
	//This one is for integer distributions
	//uniform_int_distribution<int> intDist(0,100);
	// note you can put in <long int> if you need bigger numbers


cout << "How Many Darts to Throw?" << endl;
cin >> totalDarts;

for(int i = 0; i < totalDarts; i++){

    dartX = floatDist(generator);
    dartY = floatDist(generator);
    cout << dartX << " ";


}





}
