#include <string>
#include <vector>

std::string tickets(const std::vector<int> ppl) {
  // your code here
  int bal=0;
  for(size_t i=0;i<ppl.size();i++){
    if(ppl[i] == 25)
      bal+=ppl[i];
    if(bal>=ppl[i])
      bal+=ppl[i]-25;
    if(bal<ppl[i]){
      return "NO";
    }
  }
  if(bal>=0)
    return "YES";
  return "NO";
}
