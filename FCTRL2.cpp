#include <iostream>

int fact(int n){
    return (n==1) ? n : n * fact(n-1);
}

int main(){
	int count=0;
	std::string s = std::to_string(fact(30));
	for(int i=s.length()-1;i>=0;i--) {
		if(s[i] == 0) {
			count++;
		}
		break;
	}
    return count;
}
