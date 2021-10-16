#include <iostream>
#include <cmath>
using namespace std;

bool is_square(double n){

	if ((pow(n,2) % n) == 0){
		cout << "its true" << endl;
		return true;
	} else {
		cout << "its false" << endl;
		return false;
	}
}

int main(){
	double n;
	cin >> n;
	is_square(n);
	return 0;
}
