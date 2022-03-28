#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){

    float a = 0;
    float b = 0;
    float c = 0;
    char missingSide = 'a';
    cout << "What side are you missing, enter a,b or c!";
    cin >> missingSide;
    if(missingSide == 'c'){
        cout << "Please enter the first short side";
        cin >> a;
        cout << "Please enter the second short side";
        cin >> b;

        c = sqrt(a*a + b*b);
        cout << "The Hypotenuese is: " << c << endl;
    }
    else{
        cout << "Please enter the short side";
        cin >> b;
        cout << "Please enter the hypotenuese";
        cin >> c;
        a = sqrt(c*c - b*b);

        cout << "The missing side is: " << a << endl;

    }





}
