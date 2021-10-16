/*
I = 1
V = 5
X = 10
L =  50
C = 100
D = 500
M = 1000
*/
#include <bits/stdc++.h>
using namespace std;

int valueR(char r){
  if(r == 'I') return 1;
  if(r == 'V') return 5;
  if(r == 'X') return 10;
  if(r == 'L') return 50;
  if(r == 'C') return 100;
  if(r == 'D') return 500;
  if(r == 'M') return 1000;
  return 1;
}

int solution(string roman){
  int res = 0;
  for(size_t i=0 ;i < roman.length();i++){
    int fvalue = valueR(roman[i]);
    if(i+1 < roman.length()){
      int svalue = valueR(roman[i+1]);

      if(fvalue >= svalue){
        res+=fvalue;
      }
      else {
        res = res + svalue - fvalue;
        i++;
      }
    }
    else{
      res+=fvalue;
    } 
  }
  return res;
}

int main(){
  cout << solution("VVI") << endl;
  cout << solution("I") << endl;
  cout << solution("MDCLXVI") << endl;
}
