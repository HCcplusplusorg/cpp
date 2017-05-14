#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){

    int a ,b ,c;

    for(a = 1; a <= 9; a++){
        for (b = 1; b <= 9; b++){
            c = a * b;
            cout << a << " * "<< b <<" = " << c << endl;
        }
    }
    return 0;
}
