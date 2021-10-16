#define ull unsigned long long
#include <vector>

unsigned long long solution(const std::vector<unsigned long long>& arr){
  //your code here
  ull sum=0;
  bool a=false;
  std::vector<unsigned long long> ans = arr;
  if(arr.size() == 2) 
    return (arr[0] > arr[1]) ? arr[1] : arr[0];
  for(size_t i=0;i<arr.size();i++){
    if(ans[i] == ans[0]) {
      sum += ans[i];
      a=true;
    }
    else {
      sum=0;
      a=false;
      break;
    }
  }
  if(a==true)
    return sum;
  for(size_t i=arr.size()-1; i>=0;i--) {
    for(size_t j=i-1;j>=0;j--) {
      if(ans[i] > ans[j]) {
        ans[i] = ans[i]-ans[j];
        break;
      }
    }
  }
  return solution(ans);
}
