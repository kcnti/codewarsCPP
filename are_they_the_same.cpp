#include <vector>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
      // your code
      bool ans = false;
      int count=0;
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      for(size_t i=0;i<a.size();i++) {
        for(size_t j=0;j<a.size();j++) {
          if(a[i]*a[j] == b[i]){
            count++;
            break;
          }
        }
      }
      if(count == (int)a.size())
        ans = true;
      return ans;
    }
};

