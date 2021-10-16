std::string spinWords(const std::string &str)
{
  if(str.length()<5) return str;
  std::string ans = "";
  int pos=0;
  for(int i=0;i<str.length();i++){
    std::string temp = "";
    if(str[i] == ' ' && pos < 5){
      ans = ans + str[i];
      pos = 0;
      temp = "";
    }
    temp = temp + str[str.length()-i];
    if(pos >= 5)
      ans = ans + temp;
    std::cout << temp << std::endl;
    pos++;
    std::cout << pos << " ";
  }
  return ans;
}// spinWords
