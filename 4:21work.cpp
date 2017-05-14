#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <cstdlib>
using namespace std;
int main(){
    string n;
    int b;
    int T;
    cin >> T;
    int a;
    for(int m = 0; m < T; m++){
        cin >> n;
        b = 1;
        for (int i = 0; i < n.length(); i++){
            a = atoi(n.substr(i , 1).c_str());
            b *= a;
        }
        cout << b << endl;
    }
    return 0;
}
