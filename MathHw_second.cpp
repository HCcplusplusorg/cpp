#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    string input_string;
    cin >> input_string;
    string reversed_num;
    for (int i = input_string.length() - 1; i >= 0; i--){
        reversed_num += input_string[i];
        }
    cout << reversed_num << endl;
    string new_num = "haven't seen it";
    for (int i = 0; i < reversed_num.length(); i++){
        if (new_num == "haven't seen it"){
            string str1;
            str1 = str1.assign(reversed_num, i ,1);
            if (str1.compare("0") == 0){
                continue;
            }
            else {
                new_num = "have seen it";
                cout << reversed_num[i];
            }
        }
        else {
            cout << reversed_num[i];
        }
    }
    return 0;
}
