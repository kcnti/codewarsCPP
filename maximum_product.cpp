#include <vector>
#include <iostream>
using namespace std; 

int adjacentElementsProduct(vector<int> inputArray) 
{
	int max = inputArray[0] * inputArray[1];
	int res = 0;
    for(unsigned int i = 1; i < inputArray.size(); i++)
    {
    	// for(int j = 2; j < inputArray.size(); j++)
    	// {
    	res = inputArray[i] * inputArray[i+1];
    	if(res == 0){
    		// cout << "real max: " << max << endl;
    		return max;
    	}
    	// cout << "before max: " << max << endl;
    	// cout << "test" << endl;
    	if(res > max){
    		max = res;
    		// cout << "max: " << max << endl;
    		//return max;
    	}
    	// else{
    	// 	max = max;
    	// 	// cout << "else max: " << max << endl;
    	// }
    	// }
    }
    return 0;
}

int main(){
	adjacentElementsProduct({5, 8});
	// adjacentElementsProduct({5, 6, -4, 2, 3, 2, -23});
	// adjacentElementsProduct({1, 2, 3});
	// adjacentElementsProduct({9, 5, 10, 2, 24, -1, -48});
	// adjacentElementsProduct({-23, 4, -5, 99, -27, 329, -2, 7, -921});
	// adjacentElementsProduct({1,0,1,0,1000});
	// adjacentElementsProduct({1, 2, 3});
	return 0;
}
