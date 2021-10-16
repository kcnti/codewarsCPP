#include <string>
using namespace std;

std::string DNAStrand(const std::string& dna)
{
  string res = "";
  for(int i = 0; i < dna.length(); i++)
  {
    if (dna[i] == 'T') res += 'A';
    if (dna[i] == 'A') res += 'T';
    if (dna[i] == 'G') res += 'C';
    if (dna[i] == 'C') res += 'G';
  }
  return res;
}

int main(){
    cout << DNAStrand("AAAA") << endl;
}
