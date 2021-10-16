#include <iostream>
#include <vector>
using namespace std;

vector<int> divisible_by(vector<int> numbers, int divisor)
{
  vector<int> res;
  for(int i=0; i< numbers.size(); i++){
    if(numbers.at(i) % divisor == 0){
      res.push_back(numbers.at(i));
    }
  }
  return res;
}
int main(){
  cout << divisible_by({1,2,3,4,5,6,7}, 2);
}
