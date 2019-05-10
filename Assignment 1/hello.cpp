#include <iostream>
#include <math.h>
using namespace std;


int main (void) {
	float x;
    cin >> x;
    float y=round(x);
    if(y!=x){
    	cout << "Nonint" << endl;
    	return 0;
    }
    // if (x%2!=0 && x%2!=1){
    // 	cout << "Nonint" << endl;
    // }
    int a = x;
    if(a%2==0){
    	cout << "Even" << endl;
    }

    else if(a%2==1){
    	cout << "Odd" << endl;
    }


    return 0;
}