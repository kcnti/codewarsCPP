#include <bits/stdc++.h>
using namespace std;

int main(){
	int *array_ptr;
	int temp[50];
	int loop_count {};
	int total;

	for(int i {}; i< 5; i++){
		cin >> temp[loop_count];
		loop_count++;
	}
	total = loop_count;
	array_ptr = new int[total];
	cout << sizeof temp << endl;
	cout << sizeof array_ptr << endl;
	for(int i =0; i < 5; i++){
		array_ptr[i] = temp[i];
		cout << "elem in array: ";
		cout << array_ptr[i] << endl;
	}
	delete [] array_ptr;
	return 0;
}