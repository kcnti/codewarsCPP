#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string highAndLow(string &numbers){
	getline(cin, numbers);
	string arr [] = numbers;
	int intarr[] = numbers.length();
	for (int i {}; i < intarr; ++i){
		intarr[i] = arr[i];
	}
}

int main(){
	string text;
	getline(cin, text);
	highAndLow(text);
	return 0;
}
