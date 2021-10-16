#include <iostream>
using namespace std;

/*
bool isPrime(int num){
	if(num == 2)
		return true;
  if(num!= 1 && num!=0){
  	if(num%2 != 0){
  		if(num%5 != 0)
  			return true;
  		}
    }
  else {
    return false;
    }
  return true;
}
*/

/*
bool isPrime(int num){
  if (num < 2)
    return false;
  for (int i=2; i<num; i++){
    if (num % i == 0){
      return false;
    }
  }
  return true;
}
*/

bool is_prime(int num){
  if (num < 2) {
     return false;
  }
  if (num == 2) {
       return true;
    }
    
    const int maximumDividor = sqrt(num) + 1;
  for (int i = 2; i < maximumDividor; i++) {
       if (num % i == 0) {
         return false;
       }
    }
  return true;
}

int main()
{
	int num;
	cin >> num;
	cout << is_prime(num) << endl;
	return 0;
}