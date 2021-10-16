#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int>> multiplication_table(int n){
	int input, iter;
	for(int i=0; i < n;i++){
		for(int j=0; j< n; j++){
			cin >> input;
			multiplication_table.push_back(input);
		}
	}
	for(vector<int>::const_interator i = multiplication_table.begin(); i != multiplication_table.end(); i++){
		if (iter%n == 0)
			cout << endl;
		cout << *i << " ";
		iter++;
	}
	return 0;

}

int main(){
	cout << multiplication_table(2) << endl;
}

/* This is ????
int **multiplication_table(int n) {
	int table[n][n] {};
	int count =0, comma =0;
	for(int i=0; i <n;i++){
		for(int j=0; j<n; j++){
			cin >> table[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << "[";
		for(int j = 0; j< n; j++)
		{
			cout << table[i][j];
			count++;
			if(count < n)
				cout << ",";
		}
		cout << "]";
		if(comma+1 < n)
			cout << ",";
			comma++;
		count = 0;
	}
}
*/
