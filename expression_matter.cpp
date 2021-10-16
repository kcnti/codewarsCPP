#include <iostream>
using namespace std;

unsigned short int expressionsMatter (unsigned short int a, unsigned short int b, unsigned short int c){
  int max = a*(b+c);
  int c2 = a*b*c, c3 = a+b*c, c4 = (a+b)*c, c5 = a+b+c;
  cout << "c1: " << max << " c2: " << c2 << " c3: " << c3 << " c4: " << c4 << " c5: " << c5 << endl;
  for (int i = 0; i <3;i++){
    if(c2 > max) max = c2;
    else if(c3 > max) max = c3;
    else if(c4 > max) max = c4;
    else if(c5 > max) max =c5;
  }
  //cout << (c4 > max) << endl;
  return max;
}

int main(){
  cout << expressionsMatter((2),(1),(2)) << endl;
  cout << expressionsMatter((2),(1),(1)) << endl;
  cout << expressionsMatter((1),(1),(1)) << endl;
  cout << expressionsMatter((1),(2),(3)) << endl;
}
