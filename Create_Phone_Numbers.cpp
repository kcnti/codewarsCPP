#include <bits/stdc++.h>
using namespace std;

string createPhoneNumber(int arr[10]){
  string result = "";
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<arrSize;i++){
    if(i==0)
      result+='(';
    else if(i==3)
      result+=") ";
    else if(i==6)
      result+='-';
    result += arr[i];
  }
  return result;
}

int main(){
  createPhoneNumber({1, 2, 3, 4, 5, 6, 7, 8, 9, 0});
  return 0;
}
