#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main(){
    string str;
    int n;
    while(cin >> str){
        for(int i = 0; i < str.length() - 1; i++){
            n = str[i + 1] - str[i];
            cout << abs(n);
        }
        cout << endl;
    }

    return 0;
}
