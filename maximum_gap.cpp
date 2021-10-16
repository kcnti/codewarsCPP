#include <bits/stdc++.h>
using namespace std;

int maxGap(vector <int> numbers){
  sort(numbers.begin(), numbers.end());
  reverse(numbers.begin(), numbers.end());
  int res = numbers.at(0) - numbers.at(1);
  for(size_t i=0; i < numbers.size()-1; i++){
//    cout << res << endl;
    if((numbers.at(i) - numbers.at(i+1)) > res){
      res = numbers.at(i) - numbers.at(i+1);
    }
  }
  return res;
}

int main(){
  cout << maxGap({13,10,2,9,5}) << endl;

}
