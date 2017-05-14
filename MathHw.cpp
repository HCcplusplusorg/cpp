#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main (){
    int a, b, c;
    while (cin >> a >> b >> c) {
        float d = sqrt(b * b - 4 * a * c);
        int q = (-b + d)/(2 * a);
        int p = (-b - d)/(2 * a);
        if (b * b - 4 * a * c < 0){
            cout << "No real root" << endl;
    }
        else if (q == p){
            cout << "Two same roots x=" << q << endl;
        }
        else {
            cout << "Two different roots " << "x1=" << q <<" ,"<< " x2="<< p << endl;
        }
    }
    return 0;
}
