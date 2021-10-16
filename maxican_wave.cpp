#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<string> wave(string y){
  vector<string> res;
  for(size_t i = 0; i < y.size();i++){
    if(y[i] < 'A' || y[i] > 'z'){
      continue;
    }
    string copy = y;
    copy[i] -= 32;
    for(auto word : res)
      cout << "this is result: " << word << endl;
    res.push_back(copy);
  }
  return res;
}

int main(){
//    for(const auto& word : wave("hello")){
//      cout << word << endl;
//    }
  wave("hello")o;
}
