#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <cstdlib>
using namespace std;
int main(){
    string b;
    int int_array[11];
    while(cin >> b){
    int letter_num;
    switch(b.substr(0 , 1).c_str()[0]){
        case 'A':
            letter_num = 10;
             break;
        case 'B':
            letter_num = 11;
             break;
        case 'C': 
            letter_num = 12;
             break;
        case 'D':
            letter_num = 13;
             break;
        case 'E':
            letter_num = 14;
             break;
        case 'F':
            letter_num = 15;
             break;
        case 'G':
            letter_num = 16;
             break;
        case 'H':
            letter_num = 17;
             break;
        case 'I':
            letter_num = 34;
             break;
        case 'J':
            letter_num = 18;
             break;
        case 'K':
            letter_num = 19;
             break;
        case 'L':
            letter_num = 20;
             break;
        case 'M':
            letter_num = 21;
             break;
        case 'N':
            letter_num = 22;
             break;
        case 'O':
            letter_num = 35;
             break;
        case 'P':
            letter_num = 23;
             break;
        case 'Q':
            letter_num = 24;
             break;
        case 'R':
            letter_num = 25;
             break;
        case 'S':
            letter_num = 26;
             break;
        case 'T':
            letter_num = 27;
             break;
        case 'U':
            letter_num = 28;
             break;
        case 'V':
            letter_num = 29;
             break;
        case 'W':
            letter_num = 32;
             break;
        case 'X':
            letter_num = 30;
             break;
        case 'Y':
            letter_num = 31;
             break;
        case 'Z':
            letter_num = 33;
             break;
        }
        for(int i = 1; i < 10; i++){
            int_array[i + 1] = atoi(b.substr(i , 1).c_str());
        }
        int_array[0] = letter_num / 10;
        int_array[1] = letter_num % 10;
        int a = int_array[0];
        for(int e = 1; e < 10; e++){
            a += int_array[e] * (10 - e);
        }
        a += int_array[10];
        for(int i = 0; i < 11; i++){
            cout << int_array[i] << endl;
        }
        if (a % 10 == 0) {
            cout << "real" << endl;
        }
        else {
            cout << "fake" << endl;
        }
        cout << a << endl;
    }

    return 0;
}
