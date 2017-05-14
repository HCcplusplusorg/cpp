#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    long long int N ,a ,b ,c;
    cin >> N;

    for (int n = 0; n < N; n++) {
        cin >> a >> b >> c;
        if (a == 1){
            cout << b + c << endl;
        }
        else if (a == 2){
            cout << b - c << endl;
        }
        else if (a == 3){
            cout << b * c << endl;
        }
        else if (a == 4){
            cout << b / c << endl;
        }
    }
    return 0;
}
