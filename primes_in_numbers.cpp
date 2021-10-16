#include <bits/stdc++.h>
using namespace std;

int divided(int a, int divider){
    int sum=0;
    if(a%divider > 0)
        return sum;
    sum++;
    return sum + divided(a/divider, divider);
}

string factors(int lst){
    string res = "";
    string integer = to_string(lst);
    for(int i=2;i<1000000;i++){
        if (i == 4 || i == 6 || i == 8 || i == 9 || i == 10 || i == 12 || i == 14 || i == 15 || i == 16 || i == 18)
            continue;
        string _i = to_string(i);
        string divide = to_string(divided(lst,i));
        if (divide != "0")
            if(divide == "1")
                res = res + "(" + _i + ")";
            else
                res = res + "(" + _i + "**" + divide + ")";
        if(divided(lst,i) == 0 && i == 2)
            return "(" + integer + ")";
    }
    return res;
}

int main(){
    cout << factors(7775460) << endl;
    return 0;
}
