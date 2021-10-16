#include <bits/stdc++.h>
using namespace std;

int digital_root(int n){
  int sum = 0;
  while(n>0){
    sum = sum+(n%10);
    n /= 10;
  }
  return 0;
}
int main(){
  cout << digital_root(16) << endl;
  return 0;
}
