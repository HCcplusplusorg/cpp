#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;
int main(){
    int b = 0, length;
    string input_str;
    while(cin >> input_str){
        b = 0;
        length = input_str.length();
        char reversed_str[length];
        for(int e = 0; e < length; e++ ){
            if(input_str[e] == input_str[length - 1 - e]){
                b++;
            }
        }
        if(b == length){
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }

    }


    return 0;
}
